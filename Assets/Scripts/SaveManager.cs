using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    /// <summary>
    /// �f�[�^�̕ۑ����Ǘ�����
    /// </summary>
    public class SaveManager : MonoBehaviour
    {
        /// <summary>
        ///�C���X�^���X�ۑ��p�ϐ�
        /// </summary>
        public static SaveManager Instance;

        /// <summary>
        /// �n�C�X�R�A��ۑ�����Ƃ��̃L�[
        /// </summary>
        const string HIGH_SCORE_KEY = "highScore";
        /// <summary>
        /// ���g���C�񐔂�ۑ�����Ƃ��̃L�[
        /// </summary>
        const string RETRY_COUNT_KEY = "retryCount";
        /// <summary>
        /// �������Ԃ�ۑ�����Ƃ��̃L�[
        /// </summary>
        const string PLAY_TIME_KEY = "limitTime";
        /// <summary>
        /// �x�[�X�X�R�A��ۑ�����Ƃ��̃L�[
        /// </summary>
        const string BASE_SCORE_KEY = "baseScore";

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

        // Start is called before the first frame update
        void Start()
        {

        }

        /// <summary>
        /// �n�C�X�R�A�̕ۑ�
        /// </summary>
        /// <param name="score"></param>
        public void SaveHighScore(int score)
        {
            PlayerPrefs.SetInt(HIGH_SCORE_KEY, score);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// �n�C�X�R�A�̃��[�h
        /// </summary>
        /// <returns></returns>
        public int LoadHighScore(int defaultHighScore)
        {
            return PlayerPrefs.GetInt(HIGH_SCORE_KEY, defaultHighScore);
        }

        /// <summary>
        /// ���g���C�񐔂̕ۑ�
        /// </summary>
        /// <param name="retryCount"></param>
        public void SaveRetryCount(int retryCount)
        {
            PlayerPrefs.SetInt(RETRY_COUNT_KEY, retryCount);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// ���g���C�񐔂̃��[�h
        /// </summary>
        /// <returns></returns>
        public int LoadRetryCount(int defaultRetryCount)
        {
            return PlayerPrefs.GetInt(RETRY_COUNT_KEY, defaultRetryCount);
        }

        /// <summary>
        /// �v���C���Ԃ̕ۑ�
        /// </summary>
        /// <param name="playTime"></param>
        public void SavePlayTime(int playTime)
        {
            PlayerPrefs.SetInt(PLAY_TIME_KEY, playTime);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// �v���C���Ԃ̃��[�h
        /// </summary>
        /// <returns></returns>
        public int LoadPlayTime(int defaultPlayTime)
        {
            return PlayerPrefs.GetInt(PLAY_TIME_KEY, defaultPlayTime);
        }

        /// <summary>
        /// �x�[�X�X�R�A�̕ۑ�
        /// </summary>
        /// <param name="score"></param>
        public void SaveBaseScore(int score)
        {
            PlayerPrefs.SetInt(BASE_SCORE_KEY, score);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// �x�[�X�X�R�A�̃��[�h
        /// </summary>
        /// <param name="defaultBaseScore"></param>
        /// <returns></returns>
        public int LoadBaseScore(int defaultBaseScore)
        {
            return PlayerPrefs.GetInt(BASE_SCORE_KEY, defaultBaseScore);
        }
    }
}
