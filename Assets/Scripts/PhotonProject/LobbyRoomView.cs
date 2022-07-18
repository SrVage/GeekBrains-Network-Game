using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PhotonProject
{
    public class LobbyRoomView:MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _roomName;
        [SerializeField] private TextMeshProUGUI _players;
        [SerializeField] private Image _color;

        public void SetRoomOptions(string name, int players, int maxPlayers, bool isOpen)
        {
            _roomName.text = name;
            _players.text = $"{players}/{maxPlayers}";
            if (isOpen)
                _color.color = Color.green;
            else
                _color.color = Color.red;
        }
    }
}