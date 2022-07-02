using System;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PhotonProject
{
    public class Launcher:MonoBehaviourPunCallbacks
    {
        private const string GAMEVERSION = "1";
        private const string CONNECT = "Connect";
        private const string DISCONNECT = "Disconnect";
        [SerializeField] private Button _connectButton;
        [SerializeField] private TextMeshProUGUI _statusText;
        private void Awake()
        {
            PhotonNetwork.AutomaticallySyncScene = true;
            _connectButton.onClick.AddListener(ChangeConnectState);
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
            
            Invoke(nameof(Disconnect), 5f);
        }

        private void Disconnect()
        {
            if (PhotonNetwork.IsConnected)
                PhotonNetwork.Disconnect();
        }

        public override void OnConnectedToMaster()
        {
            _connectButton.GetComponentInChildren<TextMeshProUGUI>().text = DISCONNECT;
            _statusText.text = CONNECT;
            Debug.Log("Connect to master");
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            _connectButton.GetComponentInChildren<TextMeshProUGUI>().text = CONNECT;
            _statusText.text = DISCONNECT;
            Debug.Log("Disconnect to master");
        }
    }
}