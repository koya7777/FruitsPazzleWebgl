using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    public class SoundManager : MonoBehaviour
    {
        [SerializeField] AudioClip touchSE;
        [SerializeField] AudioClip explosionSE;
        [SerializeField] AudioClip bomSE;
        [SerializeField] AudioClip titleBGM;
        [SerializeField] AudioClip mainBGM;
        [SerializeField] AudioSource audioSourceBGM;
        [SerializeField] AudioSource audioSourceSE;

        public static SoundManager Instance;

        public enum BGM
        {
            Title,
            Main,
        }

        public enum SE
        {
            Touch,
            Explosion,
            Bom,
        }

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }

        public void PlayBGM(BGM bgm)
        {
            switch (bgm)
            {
                case BGM.Title:
                    audioSourceBGM.clip = titleBGM;
                    break;
                case BGM.Main:
                    audioSourceBGM.clip = mainBGM;
                    break;
                default:
                    break;
            }
            audioSourceBGM.Play();
        }

        public void PlaySE(SE se)
        {
            AudioClip audioClip = null;
            switch (se)
            {
                case SE.Touch:
                    audioClip = touchSE;
                    break;
                case SE.Bom:
                    audioClip = bomSE;
                    break;
                case SE.Explosion:
                    audioClip = explosionSE;
                    break;
                default:
                    break;
            }
            audioSourceSE.PlayOneShot(audioClip);
        }
    }
}
