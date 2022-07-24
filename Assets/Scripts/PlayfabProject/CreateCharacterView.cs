using System.Collections.Generic;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PlayfabProject
{
    public class CreateCharacterView:MonoBehaviour
    {
        private const string ItemID = "SteelSword";
        [SerializeField] private TMP_Dropdown _selectClass;
        [SerializeField] private TMP_InputField _characterNameInputField;
        [SerializeField] private TextMeshProUGUI _healthText;
        [SerializeField] private TextMeshProUGUI _damageText;
        [SerializeField] private Button _createButton;
        [SerializeField] private Button _closeButton;
        [SerializeField] private ClassConfig _classConfig;
        private int _health;
        private int _damage;
        private string _characterName;

        private void Start()
        {
            _characterNameInputField.onValueChanged.AddListener(OnNameChanged);
            _selectClass.onValueChanged.AddListener(OnClassChanged);
            _createButton.onClick.AddListener(CreateCharacterWithItemId);
            _closeButton.onClick.AddListener(() => gameObject.SetActive(false));
        }

        private void OnClassChanged(int characterClass)
        {
            _damage = _classConfig.Avatars[characterClass].Damage;
            _health = _classConfig.Avatars[characterClass].Health;
            _healthText.text = _health.ToString();
            _damageText.text = _damage.ToString();
        }

        private void OnNameChanged(string name) => 
            _characterName = name;

        public void Active() => 
            gameObject.SetActive(true);
        
        public void CreateCharacterWithItemId()
        {
            PlayFabClientAPI.GrantCharacterToUser(new GrantCharacterToUserRequest
            {
                CharacterName = _characterName,
                ItemId = ItemID
            }, result =>
            {
                UpdateCharacterStatistics(result.CharacterId);
            }, Debug.LogError);
        }
        private void UpdateCharacterStatistics(string characterId)
        {
            PlayFabClientAPI.UpdateCharacterStatistics(new UpdateCharacterStatisticsRequest
                {
                    CharacterId = characterId,
                    CharacterStatistics = new Dictionary<string, int>
                    {
                        {"Class", _selectClass.value},
                        {"Level", 1},
                        {"XP", 0},
                        {"Damage", _damage},
                        {"Health", _health},
                    }
                }, result =>
                {
                    Debug.Log($"Initial stats set, telling client to update character list");
                    gameObject.SetActive(false);
                },
                Debug.LogError);
        }
    }
}