using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

namespace Fruits
{
    public class LevelManager : MonoBehaviour
    {
        /// <summary>
        /// 全フルーツ
        /// </summary>
        private List<Fruit> _allFruits = new List<Fruit>();
        /// <summary>
        /// 選択中のフルーツ
        /// </summary>
        private List<Fruit> _selectFruits = new List<Fruit>();
        /// <summary>
        /// 選択中のフルーツID
        /// </summary>
        private string _selectID = "";
        /// <summary>
        /// ベーススコア
        /// </summary>
        private int _baseScore = 0;
        /// <summary>
        /// スコア
        /// </summary>
        private int _score = 0;
        /// <summary>
        /// ハイスコア
        /// </summary>
        private int _highScore = 0;
        /// <summary>
        /// プレイ時間
        /// </summary>
        private int _playTime;
        /// <summary>
        /// 現在時間
        /// </summary>
        private float _currentTime;
        /// <summary>
        /// プレイ中状態
        /// </summary>
        private bool _isPlaying = true;
        /// <summary>
        /// 爆発状態
        /// </summary>
        private bool _isExplosion;
        /// <summary>
        /// リトライ回数
        /// </summary>
        private int _retryCount = 0;
        /// <summary>
        /// フルーツの生成数
        /// </summary>
        private int _fruitSpawnNum = 40;
        /// <summary>
        /// 追加プレイタイム
        /// </summary>
        private int _additionalPlayTime = 15;
        /// <summary>
        /// 追加ベーススコア
        /// </summary>
        private int _additionalBaseScore = 1000;
        /// <summary>
        /// セーブマネージャー
        /// </summary>
        private SaveManager saveManager;

        public static LevelManager Instance { get; private set; }
        /// <summary>
        /// リトライ回数
        /// </summary>
        public int RetryCount { get => _retryCount; set => _retryCount = value; }

        /// <summary>
        /// フルーツプレハブ
        /// </summary>
        public GameObject[] FruitPrefabs;
        /// <summary>
        /// ボムプレハブ
        /// </summary>
        public GameObject BomPrefab;
        /// <summary>
        /// テキストプレハブ
        /// </summary>
        public GameObject PointText;
        /// <summary>
        /// ボムを生成するために必要なフルーツの数
        /// </summary>
        public int BomSpawnCount = 5;
        /// <summary>
        /// ボムで消す範囲
        /// </summary>
        public float BomDestroyRange = 1.5f;
        /// <summary>
        /// 選択線描画
        /// </summary>
        public LineRenderer lineRenderer;
        /// <summary>
        /// フルーツを消すために必要な数
        /// </summary>
        public int FruitDestroyCount = 3;
        /// <summary>
        /// フルーツを繋ぐ範囲
        /// </summary>
        public float FruitConnectRange = 1f;
        /// <summary>
        /// ハイスコア表示テキスト
        /// </summary>
        public TextMeshProUGUI HighScoreText;
        /// <summary>
        /// スコア表示テキスト
        /// </summary>
        public TextMeshProUGUI ScoreText;
        /// <summary>
        ///時間表示テキスト
        /// </summary>
        public TextMeshProUGUI TimerText;
        /// <summary>
        /// 終了画面
        /// </summary>
        public GameObject FinishDialog;
        /// <summary>
        /// 爆発時間
        /// </summary>
        public float ExplosionTime = 0.1f;
        /// <summary>
        /// 選択状態の時のフルーツの大きさの倍率
        /// </summary>
        public float SelectScale = 1.5f;

        // Start is called before the first frame update
        void Start()
        {
            Instance = this;
            saveManager = SaveManager.Instance;
            FruitSpawn(_fruitSpawnNum);
            _baseScore = saveManager.LoadBaseScore(DefineData.DefaultBaseScore);
            _score = _baseScore;
            ScoreText.text = _score.ToString();
            _playTime = saveManager.LoadPlayTime(DefineData.DefaultPlayTime);
            _currentTime = _playTime;
            SoundManager.Instance.PlayBGM(SoundManager.BGM.Main);
            PointText.SetActive(false);
            _highScore = saveManager.LoadHighScore(DefineData.DefaultHighScore);
            HighScoreText.text = _highScore.ToString();
            RetryCount = saveManager.LoadRetryCount(DefineData.DefaultRetryCount);
        }

        // Update is called once per frame
        void Update()
        {
            LineRendererUpdate();
            TimeUpdate();
        }

        /// <summary>
        /// 時間更新
        /// </summary>
        private void TimeUpdate()
        {
            if (_isPlaying)
            {
                _currentTime -= Time.deltaTime;
                if (_currentTime <= 0)
                {
                    _currentTime = 0;
                    _isPlaying = false;
                    FinishDialog.SetActive(true);

                    if (_highScore < _score)
                    {
                        _highScore = _score;
                    }

                    // スコアを保存
                    saveManager.SaveHighScore(_highScore);
                }
                TimerText.text = ((int)_currentTime).ToString();
            }
        }

        /// <summary>
        /// ライン描画更新
        /// </summary>
        private void LineRendererUpdate()
        {
            if (_selectFruits.Count >= 2 && !_isExplosion)
            {
                lineRenderer.positionCount = _selectFruits.Count;
                lineRenderer.SetPositions(_selectFruits.Select(fruit => fruit.transform.position).ToArray());
                lineRenderer.gameObject.SetActive(true);
            }
            else
            {
                lineRenderer.gameObject.SetActive(false);
            }
        }

        /// <summary>
        /// フルーツ生成
        /// </summary>
        /// <param name="count">生成数</param>
        private void FruitSpawn(int count)
        {
            var StartX = -2;
            var StartY = 5;
            var X = 0;
            var Y = 0;
            var MaxX = 5;
            for (int i = 0; i < count; i++)
            {
                var Position = new Vector3(StartX + X, StartY + Y, 0);
                var fruitObject = Instantiate(FruitPrefabs[Random.Range(0, FruitPrefabs.Length)], Position, Quaternion.identity);
                _allFruits.Add(fruitObject.GetComponent<Fruit>());

                X++;
                if (X == MaxX)
                {
                    X = 0;
                    Y++;
                }
            }
        }

        /// <summary>
        /// フルーツを選択する
        /// </summary>
        /// <param name="fruit">フルーツ</param>
        public void FruitDown(Fruit fruit)
        {
            if (!_isPlaying) return;

            _selectFruits.Add(fruit);
            fruit.SetSelect(true);
            _selectID = fruit.ID;
            fruit.transform.DOScale(new Vector3(SelectScale, SelectScale, SelectScale), 0.5f);
            SoundManager.Instance.PlaySE(SoundManager.SE.Touch);
        }

        /// <summary>
        /// フルーツをドラッグする
        /// </summary>
        /// <param name="fruit">フルーツ</param>
        public void FruitEnter(Fruit fruit)
        {
            if (!_isPlaying) return;

            if (_selectID != fruit.ID) return;

            if (fruit.IsSelect)
            {
                if (_selectFruits.Count >= 2 && _selectFruits[_selectFruits.Count - 2] == fruit)
                {
                    var removeFruit = _selectFruits[_selectFruits.Count - 1];
                    removeFruit.SetSelect(false);
                    _selectFruits.Remove(removeFruit);
                }
            }
            else
            {
                var length = (_selectFruits[_selectFruits.Count - 1].transform.position - fruit.transform.position).magnitude;
                if (length < FruitConnectRange)
                {
                    _selectFruits.Add(fruit);
                    fruit.SetSelect(true);
                    fruit.transform.DOScale(new Vector3(SelectScale, SelectScale, SelectScale), 0.5f);
                    SoundManager.Instance.PlaySE(SoundManager.SE.Touch);
                }
            }
        }

        /// <summary>
        /// フルーツの選択をやめる
        /// </summary>
        public IEnumerator FruitUp()
        {
            if (!_isPlaying) yield return null;

            if (_selectFruits.Count >= FruitDestroyCount)
            {
                ExplosionFruits(_selectFruits);

                yield return new WaitForSeconds(ExplosionTime);

                DestroyFruits(_selectFruits);
                if (_selectFruits.Count >= BomSpawnCount)
                {
                    //BomDestroyRange += BomDestroyRange;
                    Instantiate(BomPrefab, _selectFruits[_selectFruits.Count - 1].transform.position, Quaternion.identity);
                }
            }
            else
            {
                foreach (var fruit in _selectFruits)
                {
                    fruit.SetSelect(false);
                    fruit.transform.DOScale(new Vector3(1, 1, 1), 0.5f);
                }
            }
            _selectID = "";
            _selectFruits.Clear();
        }

        /// <summary>
        /// フルーツを爆発状態にする
        /// </summary>
        /// <param name="fruits">爆発させるフルーツ</param>
        /// <returns></returns>
        private void ExplosionFruits(List<Fruit> fruits)
        {
            foreach (var fruit in fruits)
            {
                fruit.SetExplosion(true);
                fruit.SetActiveBody(false);
                fruit.SetSelect(false);
                fruit.SetActive(false);
            }
            _isExplosion = true;
            SoundManager.Instance.PlaySE(SoundManager.SE.Explosion);
        }

        /// <summary>
        /// フルーツを消す
        /// </summary>
        /// <param name="fruits">消すフルーツ</param>
        private void DestroyFruits(List<Fruit> fruits)
        {

            var point = CalcPoint(fruits.Count);
            var position = fruits[fruits.Count - 1].transform.position;

            StartCoroutine(DisplayPoint(point, position));

            foreach (var fruit in fruits)
            {
                Destroy(fruit.gameObject);
                _allFruits.Remove(fruit);
            }

            _isExplosion = false;
            FruitSpawn(fruits.Count);

            AddScore(point);
        }

        /// <summary>
        /// 画面上の全フルーツを消す
        /// </summary>
        private void DestroyAllFruits()
        {
            var removeFruit = new List<Fruit>();
            removeFruit = _allFruits.ToList();
            foreach (var fruit in removeFruit)
            {
                Destroy(fruit.gameObject);
                _allFruits.Remove(fruit);
            }
        }

        /// <summary>
        /// ポイント表示
        /// </summary>
        /// <param name="point">表示するポイント</param>
        /// <param name="position">表示する場所</param>
        /// <returns></returns>
        private IEnumerator DisplayPoint(int point, Vector3 position)
        {
            PointText.transform.position = position;
            PointText.GetComponentInChildren<Text>().text = point.ToString();
            PointText.SetActive(true);
            PointText.transform.DOLocalMoveY(100f, 1f);
            yield return new WaitForSeconds(1f);
            PointText.SetActive(false);
        }

        /// <summary>
        /// ボムを押した
        /// </summary>
        /// <param name="bom">ボム</param>
        public IEnumerator BomDown(Bom bom)
        {
            if (!_isPlaying) yield break;

            var removeFruit = new List<Fruit>();
            removeFruit = _allFruits.Where(fruit => (fruit.transform.position - bom.transform.position).magnitude < BomDestroyRange).ToList();

            ExplosionFruits(removeFruit);

            SoundManager.Instance.PlaySE(SoundManager.SE.Bom);

            yield return new WaitForSeconds(ExplosionTime);

            DestroyFruits(removeFruit);
            Destroy(bom.gameObject);
        }

        /// <summary>
        /// シャッフルボタンを押したら呼ばれる
        /// </summary>
        public void OnClickShuffleButton()
        {
            DestroyAllFruits();
            FruitSpawn(40);
        }

        /// <summary>
        /// ポイント取得
        /// </summary>
        /// <param name="fruitCount">消したフルーツの数</param>
        /// <returns></returns>
        private int CalcPoint(int fruitCount)
        {
            return (int)(fruitCount * 100 * (1 + (fruitCount - 3) * 1f));
        }

        /// <summary>
        /// スコアを追加
        /// </summary>
        /// <param name="score">追加するスコア</param>
        private void AddScore(int score)
        {
            _score += score;
            ScoreText.text = _score.ToString();
        }

        /// <summary>
        /// ベーススコアを追加
        /// </summary>
        public void AddBaseScore()
        {
            saveManager.SaveBaseScore(_baseScore += _additionalBaseScore);
        }

        /// <summary>
        /// プレイ時間を加算する
        /// </summary>
        public void AddPlayTime()
        {
            saveManager.SavePlayTime(_playTime += _additionalPlayTime);
        }
    }
}