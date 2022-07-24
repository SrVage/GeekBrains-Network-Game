using System;
using UnityEngine;

namespace PlayfabProject
{
    [CreateAssetMenu(menuName = "Config/ClassAvatar")]
    public class ClassConfig:ScriptableObject
    {
        [Serializable]
        public class Avatar
        {
            public CharacterClass Class;
            public Sprite Sprite;
            public int Damage;
            public int Health;
        }
        public Avatar[] Avatars;
    }
}