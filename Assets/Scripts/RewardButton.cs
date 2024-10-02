using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace Fruits
{
    public class RewardButton : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GetComponent<Button>().onClick.AddListener(() =>
            {
                var manager = LevelManager.Instance;
                SceneManager.LoadScene("RewardScene");
            });
        }
    }
}
