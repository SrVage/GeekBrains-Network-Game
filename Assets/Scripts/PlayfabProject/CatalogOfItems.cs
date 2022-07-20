using System;
using UnityEngine;

namespace DefaultNamespace
{
    [CreateAssetMenu(menuName = "Config/Catalog Items")]
    public class CatalogOfItems:ScriptableObject
    {
        [Serializable]
        public class Item
        {
            public string ID;
            public Sprite Image;
        }
        public Item[] Items;
        public ItemView Prefab;
    }
}