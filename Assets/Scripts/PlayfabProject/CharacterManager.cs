using System;
using System.Collections.Generic;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

namespace PlayfabProject
{
    public class CharacterManager:MonoBehaviour
    {
        private List<CharacterResult> _characters = new();
        [SerializeField] private SelectPlayerView[] _playerSlots;
        [SerializeField] private CreateCharacterView _createCharacterView;
        [SerializeField] private ClassConfig _classConfig;
        [SerializeField] private Button _fight;
        [SerializeField] private TextMeshProUGUI _fightResult;
        private List<CharacterInfo> _characterInfos = new List<CharacterInfo>();
        private int? _currentPlayer;
        private void Start()
        {
            _fight.onClick.AddListener(Fight);
            for (int i = 0; i < _playerSlots.Length; i++)
            {
                _playerSlots[i].Id = i;
                _playerSlots[i].CreateNewCharacter += CreateNewCharacter;
                _playerSlots[i].SelectCharacter += SelectCharacter;
            }
            GetCharacters();
        }

        private void Fight()
        {
            if (_currentPlayer==null)
                return;
            int fightResult = Random.Range(0, 100);
            if (fightResult < 50) 
                Loose();
            else
                Win();
        }

        private void Win()
        {
            if (_currentPlayer != null) 
                _characterInfos[(int) _currentPlayer].XP += 10;
            _fightResult.text = "Win. + 10 XP";
            CheckLevel();
        }

        private void Loose()
        {
            if (_currentPlayer != null) 
                _characterInfos[(int) _currentPlayer].XP += 1;
            _fightResult.text = "Loose. + 1 XP";
            CheckLevel();
        }

        private void CheckLevel()
        {
            if (_characterInfos[(int) _currentPlayer].XP >= _characterInfos[(int) _currentPlayer].Level * 50)
            {
                _characterInfos[(int) _currentPlayer].Level++;
                _characterInfos[(int) _currentPlayer].XP -= _characterInfos[(int) _currentPlayer].Level * 50;
            }
            Save();
            Invoke(nameof(ResetText), 2f);
        }

        private void ResetText() => 
            _fightResult.text = String.Empty;

        private void Save() => 
            UpdateCharacterStatistics(_characterInfos[(int)_currentPlayer], _characters[(int)_currentPlayer]);

        private void SelectCharacter(int currentID)
        {
            if (_currentPlayer == currentID) 
                _currentPlayer = null;
            else
                _currentPlayer = currentID;
            ChangeSelect();
        }


        private void ChangeSelect()
        {
            for (int i = 0; i < _playerSlots.Length; i++)
            {
                if (_currentPlayer!=i)
                    _playerSlots[i].Select(false);
                else
                    _playerSlots[i].Select(true);
            }
        }

        private void UpdateCharacterStatistics(CharacterInfo characterInfo, CharacterResult characterResult)
        {
            PlayFabClientAPI.UpdateCharacterStatistics(new UpdateCharacterStatisticsRequest
                {
                    CharacterId = characterResult.CharacterId,
                    CharacterStatistics = new Dictionary<string, int>
                    {
                        {"Class", (int)characterInfo.Class},
                        {"Level", characterInfo.Level},
                        {"XP", characterInfo.XP},
                        {"Damage", characterInfo.Damage},
                        {"Health", characterInfo.Health},
                    }
                }, result =>
                {
                    Debug.Log($"Initial stats set, telling client to update character list");
                    GetCharacters();
                },
                Debug.LogError);
        }

        private void CreateNewCharacter(int id)
        {
            _createCharacterView.Active();
        }

        private void GetCharacters()
        {
            PlayFabClientAPI.GetAllUsersCharacters(new ListUsersCharactersRequest(),
                res =>
                {
                    Debug.Log($"Characters owned: + {res.Characters.Count}");
                    if (_characters.Count > 0)
                    {
                        _characters.Clear();
                    }
                    foreach (var characterResult in res.Characters)
                    {
                        _characters.Add(characterResult);
                        PlayFabClientAPI.GetCharacterStatistics(new GetCharacterStatisticsRequest()
                            {
                                CharacterId = characterResult.CharacterId
                            },
                            res =>
                            {
                                var statistic = res.CharacterStatistics;
                                _characterInfos.Add(new CharacterInfo()
                                {
                                    Class = (CharacterClass)statistic["Class"],
                                    PlayerName = characterResult.CharacterName,
                                    Level = statistic["Level"],
                                    XP = statistic["XP"],
                                    Health = statistic["Health"],
                                    Damage = statistic["Damage"],
                                    Avatar = _classConfig.Avatars[statistic["Class"]].Sprite
                                });
                            },
                            error => Debug.Log(error.Error));
                    }
                    Invoke(nameof(ShowCharacters), 1f);
                }, 
                Debug.LogError);
        }

        private void ShowCharacters()
        {
            switch (_characters.Count)
            {
                case 0:
                    _playerSlots[0].CreateCharacter();
                    _playerSlots[1].CreateCharacter();
                    break;
                case 1:
                    _playerSlots[0].ShowPlayerInfo();
                    _playerSlots[0].SetPlayerStatistic(_characterInfos[0]);
                    _playerSlots[1].CreateCharacter();
                    break;
                case 2:
                    _playerSlots[0].ShowPlayerInfo();
                    _playerSlots[0].SetPlayerStatistic(_characterInfos[0]);
                    _playerSlots[1].ShowPlayerInfo();
                    _playerSlots[1].SetPlayerStatistic(_characterInfos[1]);
                    break;
            }
        }
    }
}