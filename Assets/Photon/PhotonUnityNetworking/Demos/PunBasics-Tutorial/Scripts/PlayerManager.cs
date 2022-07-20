// --------------------------------------------------------------------------------------------------------------------
// <copyright file="PlayerManager.cs" company="Exit Games GmbH">
//   Part of: Photon Unity Networking Demos
// </copyright>
// <summary>
//  Used in PUN Basics Tutorial to deal with the networked player instance
// </summary>
// <author>developer@exitgames.com</author>
// --------------------------------------------------------------------------------------------------------------------

using System;
using System.Collections.Generic;
using System.Linq;
using PlayFab;
using PlayFab.ClientModels;
using PlayFab.SharedModels;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

namespace Photon.Pun.Demo.PunBasics
{
	#pragma warning disable 649

    /// <summary>
    /// Player manager.
    /// Handles fire Input and Beams.
    /// </summary>
    public class PlayerManager : MonoBehaviourPunCallbacks, IPunObservable
    {
        #region Public Fields

        [Tooltip("The current Health of our player")]
        public float Health = 1f;

        [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
        public static GameObject LocalPlayerInstance;

        #endregion

        #region Private Fields

        private const string HEALTH = "health";

        [Tooltip("The Player's UI GameObject Prefab")]
        [SerializeField]
        private GameObject playerUiPrefab;

        [Tooltip("The Beams GameObject to control")]
        [SerializeField]
        private GameObject beams;

        //True, when the user is firing
        private bool _isFiring;
        private string _healthID;

        #endregion

        #region MonoBehaviour CallBacks

        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity during early initialization phase.
        /// </summary>
        public void Awake()
        {
            if (beams == null)
            {
                Debug.LogError("<Color=Red><b>Missing</b></Color> Beams Reference.", this);
            }
            else
            {
                beams.SetActive(false);
            }

            // #Important
            // used in GameManager.cs: we keep track of the localPlayer instance to prevent instanciation when levels are synchronized
            if (photonView.IsMine)
            {
                LocalPlayerInstance = gameObject;
            }
            GetInventory();
            // #Critical
            // we flag as don't destroy on load so that instance survives level synchronization, thus giving a seamless experience when levels load.
            DontDestroyOnLoad(gameObject);
        }

        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity during initialization phase.
        /// </summary>
        public void Start()
        {
            CameraWork _cameraWork = gameObject.GetComponent<CameraWork>();

            if (_cameraWork != null)
            {
                if (photonView.IsMine)
                {
                    _cameraWork.OnStartFollowing();
                }
            }
            else
            {
                Debug.LogError("<Color=Red><b>Missing</b></Color> CameraWork Component on player Prefab.", this);
            }

            // Create the UI
            if (playerUiPrefab != null)
            {
                GameObject _uiGo = Instantiate(playerUiPrefab);
                _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
            }
            else
            {
                Debug.LogWarning("<Color=Red><b>Missing</b></Color> PlayerUiPrefab reference on player Prefab.", this);
            }
            PlayFabClientAPI.GetAccountInfo(new GetAccountInfoRequest(), Success, Error );
            
            #if UNITY_5_4_OR_NEWER
            // Unity 5.4 has a new scene management. register a method to call CalledOnLevelWasLoaded.
			SceneManager.sceneLoaded += OnSceneLoaded;
            #endif
        }
        
        private void Error(PlayFabError error) => 
            Debug.Log(error.GenerateErrorReport());

        private void Success(GetAccountInfoResult success)
        {
            var accountInfo = success.AccountInfo;
            GetUserData(accountInfo.PlayFabId);
        }

        void GetUserData(string myPlayFabId) {
            PlayFabClientAPI.GetUserData(new GetUserDataRequest() {
                PlayFabId = myPlayFabId,
                Keys = null
            }, result => {
                Debug.Log("Got user data:");
                if (result.Data == null || !result.Data.ContainsKey(HEALTH))
                    CreateHealthData(1);
                else
                    Health = float.Parse(result.Data[HEALTH].Value);
            }, (error) => {
                Debug.Log("Got error retrieving user data:");
                Debug.Log(error.GenerateErrorReport());
            });
        }
        
        void CreateHealthData(int value) {
            PlayFabClientAPI.UpdateUserData(new UpdateUserDataRequest() {
                    Data = new Dictionary<string, string>() {
                        {HEALTH, value.ToString()},
                    } },
                result => Debug.Log("Successfully updated user data"),
                error => {
                    Debug.Log(error.GenerateErrorReport());
                });
        }


        public override void OnDisable()
		{
			// Always call the base to remove callbacks
			base.OnDisable ();

			#if UNITY_5_4_OR_NEWER
			SceneManager.sceneLoaded -= OnSceneLoaded;
			#endif
		}


        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity on every frame.
        /// Process Inputs if local player.
        /// Show and hide the beams
        /// Watch for end of game, when local player health is 0.
        /// </summary>
        public void Update()
        {
            // we only process Inputs and check health if we are the local player
            if (photonView.IsMine)
            {
                ProcessInputs();

                if (Health <= 0f)
                {
                    GameManager.Instance.LeaveRoom();
                }
            }

            if (beams != null && _isFiring != beams.activeInHierarchy)
            {
                beams.SetActive(_isFiring);
            }
        }

        /// <summary>
        /// MonoBehaviour method called when the Collider 'other' enters the trigger.
        /// Affect Health of the Player if the collider is a beam
        /// Note: when jumping and firing at the same, you'll find that the player's own beam intersects with itself
        /// One could move the collider further away to prevent this or check if the beam belongs to the player.
        /// </summary>
        public void OnTriggerEnter(Collider other)
        {
            if (!photonView.IsMine)
            {
                return;
            }


            // We are only interested in Beamers
            // we should be using tags but for the sake of distribution, let's simply check by name.
            if (!other.name.Contains("Beam"))
            {
                return;
            }

            Health -= 0.1f;
        }

        /// <summary>
        /// MonoBehaviour method called once per frame for every Collider 'other' that is touching the trigger.
        /// We're going to affect health while the beams are interesting the player
        /// </summary>
        /// <param name="other">Other.</param>
        public void OnTriggerStay(Collider other)
        {
            // we dont' do anything if we are not the local player.
            if (!photonView.IsMine)
            {
                return;
            }

            // We are only interested in Beamers
            // we should be using tags but for the sake of distribution, let's simply check by name.
            if (!other.name.Contains("Beam"))
            {
                return;
            }

            // we slowly affect health when beam is constantly hitting us, so player has to move to prevent death.
            Health -= 0.1f*Time.deltaTime;
        }


        #if !UNITY_5_4_OR_NEWER
        /// <summary>See CalledOnLevelWasLoaded. Outdated in Unity 5.4.</summary>
        void OnLevelWasLoaded(int level)
        {
            this.CalledOnLevelWasLoaded(level);
        }
        #endif


        /// <summary>
        /// MonoBehaviour method called after a new level of index 'level' was loaded.
        /// We recreate the Player UI because it was destroy when we switched level.
        /// Also reposition the player if outside the current arena.
        /// </summary>
        /// <param name="level">Level index loaded</param>
        void CalledOnLevelWasLoaded(int level)
        {
            // check if we are outside the Arena and if it's the case, spawn around the center of the arena in a safe zone
            if (!Physics.Raycast(transform.position, -Vector3.up, 5f))
            {
                transform.position = new Vector3(0f, 5f, 0f);
            }

            GameObject _uiGo = Instantiate(playerUiPrefab);
            _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
        }

        #endregion

        #region Private Methods


		#if UNITY_5_4_OR_NEWER
		void OnSceneLoaded(Scene scene, LoadSceneMode loadingMode)
		{
			CalledOnLevelWasLoaded(scene.buildIndex);
		}
		#endif

        /// <summary>
        /// Processes the inputs. This MUST ONLY BE USED when the player has authority over this Networked GameObject (photonView.isMine == true)
        /// </summary>
        void ProcessInputs()
        {
            if (Input.GetButtonDown("Fire1"))
            {
                // we don't want to fire when we interact with UI buttons for example. IsPointerOverGameObject really means IsPointerOver*UI*GameObject
                // notice we don't use on on GetbuttonUp() few lines down, because one can mouse down, move over a UI element and release, which would lead to not lower the isFiring Flag.
                if (EventSystem.current.IsPointerOverGameObject())
                {
                    //	return;
                }

                if (!_isFiring)
                {
                    _isFiring = true;
                }
            }

            if (Input.GetButtonUp("Fire1"))
            {
                if (_isFiring)
                {
                    _isFiring = false;
                }
            }

            if (Input.GetKeyDown(KeyCode.F))
            { 
                ConsumePotion();
            }
        }

        #endregion

        #region IPunObservable implementation
        
        void GetInventory() {
            PlayFabClientAPI.GetUserInventory(new GetUserInventoryRequest(), result=>LogSuccessInventory(result.Inventory),
                LogFailure);
        }

        private void LogSuccessInventory(List<ItemInstance> resultInventory) => 
            _healthID = resultInventory.First(k => k.ItemId == "Health").ItemInstanceId;


        void ConsumePotion() {
            PlayFabClientAPI.ConsumeItem(new ConsumeItemRequest {
                ConsumeCount = 1,
ItemInstanceId = _healthID
            }, LogSuccess, LogFailure);
        }
        
        void LogSuccess(PlayFabResultCommon result)
        {
            Health += 1;
            var requestName = result.Request.GetType().Name;
            Debug.Log(requestName + " successful");
        }
        void LogFailure(PlayFabError error) {
            Debug.LogError(error.GenerateErrorReport());
        }

        public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                // We own this player: send the others our data
                stream.SendNext(_isFiring);
                stream.SendNext(Health);
            }
            else
            {
                // Network player, receive data
                _isFiring = (bool)stream.ReceiveNext();
                Health = (float)stream.ReceiveNext();
            }
        }

        #endregion
    }
}