using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;

namespace PhotonProject
{
    public class Launcher:MonoBehaviourPunCallbacks
    {
        private const string GAMEVERSION = "1";
        private const string CONNECT = "Connect";
        private const string DISCONNECT = "Disconnect";
        [SerializeField] private ConnectButtonView _connectButton;
        [SerializeField] private TextMeshProUGUI _statusText;
        private float _timer = 5f;
        private bool _timerStart = false;
        private void Awake()
        {
            PhotonNetwork.AutomaticallySyncScene = true;
            _connectButton.ConnectButton.onClick.AddListener(ChangeConnectState);
        }

        private void ChangeConnectState()
        {
            if (PhotonNetwork.IsConnected) 
                Disconnect();
            else
                Connect();
        }


        private void Connect()
        {
            if (PhotonNetwork.IsConnected) 
                PhotonNetwork.JoinRandomRoom();
            else
            {
                PhotonNetwork.ConnectUsingSettings();
                PhotonNetwork.GameVersion = GAMEVERSION;
            }
        }

        private void Disconnect()
        {
            if (PhotonNetwork.IsConnected)
                PhotonNetwork.Disconnect();
        }

        public override void OnConnectedToMaster()
        {
            _connectButton.Status = DISCONNECT;
            _statusText.text = CONNECT;
            Debug.Log("Connect to master");
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            _connectButton.Status = CONNECT;
            _statusText.text = DISCONNECT;
            Debug.Log("Disconnect to master");
        }

        private void Update()
        {
            if (!_timerStart)
                return;
            _timer -= Time.deltaTime;
            if (_timer <= 0)
            {
                _timerStart = false;
                _timer = 5f;
                Disconnect();
            }
        }
    }
}