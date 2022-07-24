using System;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace PlayfabProject
{
    public class SelectPlayerView:MonoBehaviour
    {
        public event Action<int> CreateNewCharacter;
        public event Action<int> SelectCharacter;
        [SerializeField] private GameObject _createPlayerPanel;
        [SerializeField] private GameObject _playerInfoPanel;
        [SerializeField] private Image _avatarImage;
        [SerializeField] private TextMeshProUGUI _playerNameText;
        [SerializeField] private TextMeshProUGUI _playerLevelText;
        [SerializeField] private TextMeshProUGUI _playerXPText;
        [SerializeField] private TextMeshProUGUI _playerHealthText;
        [SerializeField] private TextMeshProUGUI _playerDamageText;
        [SerializeField] private Button _button;
        private int _id;
        private bool _isCreated = true;

        public int Id
        {
            get => _id;
            set => _id = value;
        }
        private void Start() => 
            _button.onClick.AddListener(ButtonClickHandler);

        private void ButtonClickHandler()
        {
            if (!_isCreated)
                CreateNewCharacter?.Invoke(_id);
            else
                SelectCharacter?.Invoke(_id);
        }

        public void CreateCharacter()
        {
            _createPlayerPanel.SetActive(true);
            _playerInfoPanel.SetActive(false);
            _isCreated = false;
        }
        
        public void ShowPlayerInfo()
        {
            _createPlayerPanel.SetActive(false);
            _playerInfoPanel.SetActive(true);
            _isCreated = true;
        }

        public void SetPlayerStatistic(CharacterInfo characterInfo)
        {
            _avatarImage.sprite = characterInfo.Avatar;
            _playerNameText.text = characterInfo.PlayerName;
            _playerLevelText.text = $"Level: {characterInfo.Level}";
            _playerXPText.text = $"XP: {characterInfo.XP}";
            _playerHealthText.text = $"Health: {characterInfo.Health}";
            _playerDamageText.text = $"Damage: {characterInfo.Damage}";
        }

        public void Select(bool select)
        {
            if (select)
                _avatarImage.color = Color.green;
            else
                _avatarImage.color = Color.white;
        }
    }
}