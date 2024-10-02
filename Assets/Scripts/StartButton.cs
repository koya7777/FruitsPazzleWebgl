using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Fruits
{
    public class StartButton : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GetComponent<Button>().onClick.AddListener(() =>
            {
                ResetPlayTime();
                ResetBaseScore();
                SceneManager.LoadScene("GameScene");
            });
        }

        /// <summary>
        ///  �v���C���Ԃ̃��Z�b�g
        /// </summary>
        void ResetPlayTime()
        {
            SaveManager.Instance.SavePlayTime(DefineData.DefaultPlayTime);
        }
         /// <summary>
         /// �x�[�X�X�R�A�̃��Z�b�g
         /// </summary>
        void ResetBaseScore()
        {
            SaveManager.Instance.SaveBaseScore(DefineData.DefaultBaseScore);
        }
    }
}
