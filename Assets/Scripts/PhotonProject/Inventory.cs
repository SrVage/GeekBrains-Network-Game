using System;
using System.Collections.Generic;
using System.Linq;
using DefaultNamespace;
using PlayFab;
using PlayFab.ClientModels;
using PlayFab.SharedModels;
using Unity.VisualScripting;
using UnityEditor.PackageManager;
using UnityEngine;
using UnityEngine.UI;

namespace PhotonProject
{
    public class Inventory:MonoBehaviour
    {
        [SerializeField] private Button _openInventory;
        [SerializeField] private Button _closeInventory;
        [SerializeField] private GameObject _panel;
        [SerializeField] private Transform _inventory;
        [SerializeField] private CatalogOfItems _item;
        private readonly Dictionary<string, CatalogItem> _catalog = new Dictionary<string, CatalogItem>();


        private void Start()
        {
            PlayFabClientAPI.GetCatalogItems(new GetCatalogItemsRequest(), OnGetCatalogSuccess, Error);
            _openInventory.onClick.AddListener(()=>_panel.SetActive(true));
            _closeInventory.onClick.AddListener(()=>_panel.SetActive(false));
        }

        private void OnGetCatalogSuccess(GetCatalogItemsResult result)
        {
            ShowCatalog(result.Catalog);
            Debug.Log("Load catalog successful");
        }

        private void ShowCatalog(List<CatalogItem> items)
        {
            foreach (var item in items)
            {
                _catalog.Add(item.ItemId, item);
                if (item.ItemClass == "Potion") 
                    CreateItem(item, _inventory);
                Debug.Log($"Catalog item {item.ItemId} was added successfully!");
            }
        }

        private void CreateItem(CatalogItem item, Transform parent)
        {
            var itemView = Instantiate(_item.Prefab, parent);
            itemView.Click += Buy;
            var sprite = _item.Items.First(i => i.ID == item.ItemId).Image;
            itemView.SetItem(item.ItemId, sprite, item.DisplayName, item.Description);
        }

        
        private void Buy(string item)
        {
            MakePurchase(_catalog[item]);
        }
        void MakePurchase(CatalogItem item) {
            Debug.Log((int)item.VirtualCurrencyPrices["GO"]+" "+item.ItemId);
            PlayFabClientAPI.PurchaseItem(new PurchaseItemRequest {
                // In your game, this should just be a constant matching your primary catalog
                CatalogVersion = "Things",
                ItemId = item.ItemId,
                Price = (int)item.VirtualCurrencyPrices["GO"],
                VirtualCurrency = "GO"
            }, LogSuccess, LogFailure);
        }

        void LogSuccess(PlayFabResultCommon result) {
            var requestName = result.Request.GetType().Name;
            Debug.Log(requestName + " successful");
        }
        void LogFailure(PlayFabError error) {
            Debug.LogError(error.GenerateErrorReport());
        }


        private void Error(PlayFabError error) => 
            Debug.Log(error.GenerateErrorReport());
    }
}