using System;
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;

namespace PhotonProject
{
    public class ConnectAndJoinRoom:MonoBehaviour, IConnectionCallbacks, IMatchmakingCallbacks, ILobbyCallbacks
    {
        [SerializeField] private ServerSettings _serverSettings;
        [SerializeField] private TextMeshProUGUI _statusText;
        private string GAME_MODE_PVP = "PVP";
        private string MAP_KEY = "C0";
        private string MONEY_KEY = "C1";
        
        private LoadBalancingClient _loadBalancingClient;

        private void Start()
        {
            _loadBalancingClient = new LoadBalancingClient();
            _loadBalancingClient.AddCallbackTarget(this);
            if (!_loadBalancingClient.ConnectUsingSettings(_serverSettings.AppSettings)) 
                Debug.Log("Error");
        }

        private void OnDestroy() => 
            _loadBalancingClient.RemoveCallbackTarget(this);

        private void Update()
        {
            if(_loadBalancingClient==null)
                return;
            _loadBalancingClient.Service();
            var state = _loadBalancingClient.State.ToString();
            _statusText.text = $"State: {state}, UserID: {_loadBalancingClient.UserId}";
        }

        public void OnConnected()
        {
        }

        public void OnConnectedToMaster()
        {
            Debug.Log(nameof(OnConnectedToMaster));
            var roomOptions = new RoomOptions()
            {
                MaxPlayers = 12,
                CustomRoomProperties = new Hashtable {{GAME_MODE_PVP, 1}},
                CustomRoomPropertiesForLobby = new []{MAP_KEY, MONEY_KEY},
                IsVisible = false,
                PublishUserId = true
            };
            var enterRoomParams = new EnterRoomParams()
            {
                RoomOptions = roomOptions,
            };
            _loadBalancingClient.OpCreateRoom(enterRoomParams);
        }

        public void OnDisconnected(DisconnectCause cause)
        {
        }

        public void OnRegionListReceived(RegionHandler regionHandler)
        {
        }

        public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
        {
        }

        public void OnCustomAuthenticationFailed(string debugMessage)
        {
        }

        public void OnFriendListUpdate(List<FriendInfo> friendList)
        {
        }

        public void OnCreatedRoom()
        {
        }

        public void OnCreateRoomFailed(short returnCode, string message)
        {
        }

        public void OnJoinedRoom()
        {
            Debug.Log(nameof(OnJoinedRoom));
        }

        public void OnJoinRoomFailed(short returnCode, string message)
        {
            Debug.Log(nameof(OnJoinRandomFailed));
            _loadBalancingClient.OpCreateRoom(new EnterRoomParams());
        }

        public void OnJoinRandomFailed(short returnCode, string message)
        {
        }

        public void OnLeftRoom()
        {
        }

        public void OnJoinedLobby()
        {
            throw new NotImplementedException();
        }

        public void OnLeftLobby()
        {
            throw new NotImplementedException();
        }

        public void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            throw new NotImplementedException();
        }

        public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
        {
            throw new NotImplementedException();
        }
    }
}