using System;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace PlayfabProject
{
    public class Login:MonoBehaviour
    {
        private const string TILEID = "987E1";
        private const string ERRORTEXT = "Error";
        private const string SUCCESSTEXT = "Success";
        [SerializeField] private Button _loginButton;
        [SerializeField] private TextMeshProUGUI _statusText;

        private void Start() => 
            _loginButton.onClick.AddListener(Connect);

        private void Connect()
        {
            if (string.IsNullOrEmpty(PlayFabSettings.staticSettings.TitleId))
                PlayFabSettings.staticSettings.TitleId = TILEID;
            var request = new LoginWithCustomIDRequest()
            {
                CustomId = "Player1",
                CreateAccount = true
            };
            PlayFabClientAPI.LoginWithCustomID(request, OnLoginSuccess, OnLoginFailure);
        }

        private void OnLoginFailure(PlayFabError error)
        {
            Debug.Log($"Error with parameters: {error.GenerateErrorReport()}");
            _statusText.text = ERRORTEXT;
            _statusText.color = Color.red;
        }

        private void OnLoginSuccess(LoginResult result)
        {
            Debug.Log("Success");
            _statusText.text = SUCCESSTEXT;
            _statusText.color = Color.green;
        }
    }
}