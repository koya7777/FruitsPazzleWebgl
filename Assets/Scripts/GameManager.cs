using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Fruits
{
    public class GameManager : MonoBehaviour
    {
        public static GameManager Instance;

        public enum GameState
        {
            Title,
            Game,
        }

        public GameState CurrentState { get; private set; }

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
            CurrentState = GameState.Title;
        }

        // Update is called once per frame
        void Update()
        {
            switch (CurrentState)
            {
                case GameState.Title:
                    break;
                case GameState.Game:
                    break;
                default:
                    break;
            }
        }
    }
}
