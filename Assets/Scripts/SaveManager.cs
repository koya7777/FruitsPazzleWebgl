using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    /// <summary>
    /// データの保存を管理する
    /// </summary>
    public class SaveManager : MonoBehaviour
    {
        /// <summary>
        ///インスタンス保存用変数
        /// </summary>
        public static SaveManager Instance;

        /// <summary>
        /// ハイスコアを保存するときのキー
        /// </summary>
        const string HIGH_SCORE_KEY = "highScore";
        /// <summary>
        /// リトライ回数を保存するときのキー
        /// </summary>
        const string RETRY_COUNT_KEY = "retryCount";
        /// <summary>
        /// 制限時間を保存するときのキー
        /// </summary>
        const string PLAY_TIME_KEY = "limitTime";
        /// <summary>
        /// ベーススコアを保存するときのキー
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
        /// ハイスコアの保存
        /// </summary>
        /// <param name="score"></param>
        public void SaveHighScore(int score)
        {
            PlayerPrefs.SetInt(HIGH_SCORE_KEY, score);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// ハイスコアのロード
        /// </summary>
        /// <returns></returns>
        public int LoadHighScore(int defaultHighScore)
        {
            return PlayerPrefs.GetInt(HIGH_SCORE_KEY, defaultHighScore);
        }

        /// <summary>
        /// リトライ回数の保存
        /// </summary>
        /// <param name="retryCount"></param>
        public void SaveRetryCount(int retryCount)
        {
            PlayerPrefs.SetInt(RETRY_COUNT_KEY, retryCount);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// リトライ回数のロード
        /// </summary>
        /// <returns></returns>
        public int LoadRetryCount(int defaultRetryCount)
        {
            return PlayerPrefs.GetInt(RETRY_COUNT_KEY, defaultRetryCount);
        }

        /// <summary>
        /// プレイ時間の保存
        /// </summary>
        /// <param name="playTime"></param>
        public void SavePlayTime(int playTime)
        {
            PlayerPrefs.SetInt(PLAY_TIME_KEY, playTime);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// プレイ時間のロード
        /// </summary>
        /// <returns></returns>
        public int LoadPlayTime(int defaultPlayTime)
        {
            return PlayerPrefs.GetInt(PLAY_TIME_KEY, defaultPlayTime);
        }

        /// <summary>
        /// ベーススコアの保存
        /// </summary>
        /// <param name="score"></param>
        public void SaveBaseScore(int score)
        {
            PlayerPrefs.SetInt(BASE_SCORE_KEY, score);
            PlayerPrefs.Save();
        }

        /// <summary>
        /// ベーススコアのロード
        /// </summary>
        /// <param name="defaultBaseScore"></param>
        /// <returns></returns>
        public int LoadBaseScore(int defaultBaseScore)
        {
            return PlayerPrefs.GetInt(BASE_SCORE_KEY, defaultBaseScore);
        }
    }
}
