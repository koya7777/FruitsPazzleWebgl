using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace Fruits
{
    public class RetryButton : MonoBehaviour
    {
        /// <summary>
        /// 広告再生に必要な回数
        /// </summary>
        const int AdsNeedCount = 3;

        // Start is called before the first frame update
        void Start()
        {
            GetComponent<Button>().onClick.AddListener(() =>
            {
                var manager = LevelManager.Instance;
                var saveManager = SaveManager.Instance;
                manager.RetryCount++;
                if (manager.RetryCount >= AdsNeedCount)
                {
                    manager.RetryCount = 0;
                }
                else
                {
                    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                }
                saveManager.SaveRetryCount(manager.RetryCount);
            });
        }
    }
}
