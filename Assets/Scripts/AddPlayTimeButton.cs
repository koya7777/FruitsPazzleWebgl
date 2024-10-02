using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Fruits
{
    public class AddPlayTimeButton : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GetComponent<Button>().onClick.AddListener(() =>
            {
                var manager = LevelManager.Instance;
                manager.AddPlayTime();
                SceneManager.LoadScene("GameScene");
            });
        }
    }
}
