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
        [SerializeField] private Transform _parent;
        [SerializeField] private LobbyRoomView _lobbyRoomView;
        [SerializeField] private ButtonsContainerView _buttonsContainerView;
        private TypedLobby _customLobby = new TypedLobby("customLobby", LobbyType.Default);
        private Dictionary<string, RoomInfo> _cachedRoomList = new Dictionary<string, RoomInfo>();
        private string GAME_MODE_PVP = "PVP";
        private string MAP_KEY = "C0";
        private string MONEY_KEY = "C1";
        private List<LobbyRoomView> _lobbyRoomViews = new List<LobbyRoomView>();

        private LoadBalancingClient _loadBalancingClient;

        private void Start()
        {
            _loadBalancingClient = new LoadBalancingClient();
            _loadBalancingClient.AddCallbackTarget(this);
            if (!_loadBalancingClient.ConnectUsingSettings(_serverSettings.AppSettings)) 
                Debug.Log("Error");
            _buttonsContainerView.CreateRoom.onClick.AddListener(CreateRoom);
            _buttonsContainerView.PrivateRoom.onClick.AddListener(PrivateRoom);
            _buttonsContainerView.JoinRoom.onClick.AddListener(JoinRoom);
            _buttonsContainerView.CloseRoom.onClick.AddListener(CloseRoom);
        }

        private void JoinRoom()
        {
            var enterRoomParams = new EnterRoomParams()
            {
               RoomName = _buttonsContainerView.JoinRoomName
            };
            _loadBalancingClient.OpJoinRoom(enterRoomParams);
        }

        private void PrivateRoom()
        {
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
            _loadBalancingClient.OpJoinLobby(_customLobby);
        }

        private void CreateRoom()
        {
            var roomOptions = new RoomOptions()
            {
                MaxPlayers = 12,
                CustomRoomProperties = new Hashtable {{GAME_MODE_PVP, 1}},
                CustomRoomPropertiesForLobby = new []{MAP_KEY, MONEY_KEY},
                IsVisible = true,
                PublishUserId = true
            };
            var enterRoomParams = new EnterRoomParams()
            {
                RoomOptions = roomOptions,
            };
            _loadBalancingClient.OpCreateRoom(enterRoomParams);
        }

        private void CloseRoom()
        {
            if( _loadBalancingClient.InRoom)
                _loadBalancingClient.CurrentRoom.IsOpen = false;
        }

        public void OnDisconnected(DisconnectCause cause)
        {
            _cachedRoomList.Clear();
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

        public void OnCreatedRoom() => 
            _buttonsContainerView.RoomName = _loadBalancingClient.CurrentRoom.Name;

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

        public void OnJoinedLobby() => 
            _cachedRoomList.Clear();

        public void OnLeftLobby() => 
            _cachedRoomList.Clear();

        public void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            UpdateCachedRoomList(roomList);
        }
        
        private void UpdateCachedRoomList(List<RoomInfo> roomList)
        {
            for (int i = 0; i < roomList.Count; i++)
            {
                RoomInfo info = roomList[i];
                if (info.RemovedFromList)
                    _cachedRoomList.Remove(info.Name);
                else
                    _cachedRoomList[info.Name] = info;
            }
            RefreshLobby();
        }

        private void RefreshLobby()
        {
            for (int i = 0; i < _lobbyRoomViews.Count; i++)
            {
                Destroy(_lobbyRoomViews[i]);
            }
            _lobbyRoomViews.Clear();
            foreach (var cachedRoom in _cachedRoomList)
            {
                var room = cachedRoom.Value;
                if (room.IsVisible)
                {
                    var lobbyRoom = Instantiate(_lobbyRoomView, _parent);
                        lobbyRoom.SetRoomOptions(room.Name, room.PlayerCount, room.MaxPlayers, room.IsOpen);
                    _lobbyRoomViews.Add(lobbyRoom);
                }
            }
        }

        public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
        {
            throw new NotImplementedException();
        }
    }
}