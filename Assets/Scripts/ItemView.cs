using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace DefaultNamespace
{
    public class ItemView:MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        [SerializeField] private Image _image;
        [SerializeField] private TextMeshProUGUI _itemName;
        [SerializeField] private TextMeshProUGUI _description;

        public void SetItem(Sprite sprite, string name, string description = null)
        {
            _image.sprite = sprite;
            _itemName.text = name;
            _description.text = description;
            _description.gameObject.SetActive(false);
        }

        public void OnPointerEnter(PointerEventData eventData) => 
            _description.gameObject.SetActive(true);

        public void OnPointerExit(PointerEventData eventData) => 
            _description.gameObject.SetActive(false);
    }
}