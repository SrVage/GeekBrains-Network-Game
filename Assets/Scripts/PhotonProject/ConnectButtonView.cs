using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PhotonProject
{
    public class ConnectButtonView:MonoBehaviour
    {
        [SerializeField] private Button _connectButton;
        [SerializeField] private TextMeshProUGUI _statusText;
        public Button ConnectButton => _connectButton;

        public string Status
        {
            get => _statusText.text;
            set => _statusText.text = value;
        }
        
    }
}