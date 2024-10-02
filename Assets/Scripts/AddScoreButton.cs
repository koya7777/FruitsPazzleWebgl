using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Fruits
{
    public class AddScoreButton : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GetComponent<Button>().onClick.AddListener(() =>
            {
                var manager = LevelManager.Instance;
                manager.AddBaseScore();
                SceneManager.LoadScene("GameScene");
            });
        }
    }
}
