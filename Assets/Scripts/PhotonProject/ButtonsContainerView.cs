using System;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

namespace PhotonProject
{
    public class ButtonsContainerView:MonoBehaviour
    {
        [SerializeField] private Button _createRoom;
        [SerializeField] private Button _privateRoom;
        [SerializeField] private Button _joinRoom;
        [SerializeField] private Button _closeRoom;
        [SerializeField] private Button _copyRoomName;
        [SerializeField] private TextMeshProUGUI _roomName;
        [SerializeField] private TMP_InputField _joinRoomName;

        public Button CreateRoom => _createRoom;
        public Button PrivateRoom => _privateRoom;
        public Button JoinRoom => _joinRoom;
        public Button CloseRoom => _closeRoom;

        public string RoomName
        {
            set => _roomName.text = value;
        }

        public string JoinRoomName => _joinRoomName.text;

        private void Start() => 
            _copyRoomName.onClick.AddListener(CopyRoomName);

        private void CopyRoomName() => 
            GUIUtility.systemCopyBuffer = _roomName.text;
    }
}