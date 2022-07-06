using System;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PlayfabProject
{
    public class PlayfabAccountManager:MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _userNameText;
        [SerializeField] private TextMeshProUGUI _timeInGame;
        [SerializeField] private Button _forgetAccount;
        private void Start()
        {
            PlayFabClientAPI.GetAccountInfo(new GetAccountInfoRequest(), Success, Error );
            _forgetAccount.onClick.AddListener(Forget);
        }

        private void Forget() => 
            PlayFabClientAPI.ForgetAllCredentials();

        private void Error(PlayFabError error)
        {
            Debug.Log(error.GenerateErrorReport());
        }

        private void Success(GetAccountInfoResult success)
        {
            var accountInfo = success.AccountInfo;
            _userNameText.text = accountInfo.Username;
            _timeInGame.text = (DateTime.UtcNow - accountInfo.Created).TotalDays.ToString("N2");
        }
    }
}