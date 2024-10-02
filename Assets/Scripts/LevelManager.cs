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
        /// �S�t���[�c
        /// </summary>
        private List<Fruit> _allFruits = new List<Fruit>();
        /// <summary>
        /// �I�𒆂̃t���[�c
        /// </summary>
        private List<Fruit> _selectFruits = new List<Fruit>();
        /// <summary>
        /// �I�𒆂̃t���[�cID
        /// </summary>
        private string _selectID = "";
        /// <summary>
        /// �x�[�X�X�R�A
        /// </summary>
        private int _baseScore = 0;
        /// <summary>
        /// �X�R�A
        /// </summary>
        private int _score = 0;
        /// <summary>
        /// �n�C�X�R�A
        /// </summary>
        private int _highScore = 0;
        /// <summary>
        /// �v���C����
        /// </summary>
        private int _playTime;
        /// <summary>
        /// ���ݎ���
        /// </summary>
        private float _currentTime;
        /// <summary>
        /// �v���C�����
        /// </summary>
        private bool _isPlaying = true;
        /// <summary>
        /// �������
        /// </summary>
        private bool _isExplosion;
        /// <summary>
        /// ���g���C��
        /// </summary>
        private int _retryCount = 0;
        /// <summary>
        /// �t���[�c�̐�����
        /// </summary>
        private int _fruitSpawnNum = 40;
        /// <summary>
        /// �ǉ��v���C�^�C��
        /// </summary>
        private int _additionalPlayTime = 15;
        /// <summary>
        /// �ǉ��x�[�X�X�R�A
        /// </summary>
        private int _additionalBaseScore = 1000;
        /// <summary>
        /// �Z�[�u�}�l�[�W���[
        /// </summary>
        private SaveManager saveManager;

        public static LevelManager Instance { get; private set; }
        /// <summary>
        /// ���g���C��
        /// </summary>
        public int RetryCount { get => _retryCount; set => _retryCount = value; }

        /// <summary>
        /// �t���[�c�v���n�u
        /// </summary>
        public GameObject[] FruitPrefabs;
        /// <summary>
        /// �{���v���n�u
        /// </summary>
        public GameObject BomPrefab;
        /// <summary>
        /// �e�L�X�g�v���n�u
        /// </summary>
        public GameObject PointText;
        /// <summary>
        /// �{���𐶐����邽�߂ɕK�v�ȃt���[�c�̐�
        /// </summary>
        public int BomSpawnCount = 5;
        /// <summary>
        /// �{���ŏ����͈�
        /// </summary>
        public float BomDestroyRange = 1.5f;
        /// <summary>
        /// �I����`��
        /// </summary>
        public LineRenderer lineRenderer;
        /// <summary>
        /// �t���[�c���������߂ɕK�v�Ȑ�
        /// </summary>
        public int FruitDestroyCount = 3;
        /// <summary>
        /// �t���[�c���q���͈�
        /// </summary>
        public float FruitConnectRange = 1f;
        /// <summary>
        /// �n�C�X�R�A�\���e�L�X�g
        /// </summary>
        public TextMeshProUGUI HighScoreText;
        /// <summary>
        /// �X�R�A�\���e�L�X�g
        /// </summary>
        public TextMeshProUGUI ScoreText;
        /// <summary>
        ///���ԕ\���e�L�X�g
        /// </summary>
        public TextMeshProUGUI TimerText;
        /// <summary>
        /// �I�����
        /// </summary>
        public GameObject FinishDialog;
        /// <summary>
        /// ��������
        /// </summary>
        public float ExplosionTime = 0.1f;
        /// <summary>
        /// �I����Ԃ̎��̃t���[�c�̑傫���̔{��
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
        /// ���ԍX�V
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

                    // �X�R�A��ۑ�
                    saveManager.SaveHighScore(_highScore);
                }
                TimerText.text = ((int)_currentTime).ToString();
            }
        }

        /// <summary>
        /// ���C���`��X�V
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
        /// �t���[�c����
        /// </summary>
        /// <param name="count">������</param>
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
        /// �t���[�c��I������
        /// </summary>
        /// <param name="fruit">�t���[�c</param>
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
        /// �t���[�c���h���b�O����
        /// </summary>
        /// <param name="fruit">�t���[�c</param>
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
        /// �t���[�c�̑I������߂�
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
        /// �t���[�c�𔚔���Ԃɂ���
        /// </summary>
        /// <param name="fruits">����������t���[�c</param>
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
        /// �t���[�c������
        /// </summary>
        /// <param name="fruits">�����t���[�c</param>
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
        /// ��ʏ�̑S�t���[�c������
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
        /// �|�C���g�\��
        /// </summary>
        /// <param name="point">�\������|�C���g</param>
        /// <param name="position">�\������ꏊ</param>
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
        /// �{����������
        /// </summary>
        /// <param name="bom">�{��</param>
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
        /// �V���b�t���{�^������������Ă΂��
        /// </summary>
        public void OnClickShuffleButton()
        {
            DestroyAllFruits();
            FruitSpawn(40);
        }

        /// <summary>
        /// �|�C���g�擾
        /// </summary>
        /// <param name="fruitCount">�������t���[�c�̐�</param>
        /// <returns></returns>
        private int CalcPoint(int fruitCount)
        {
            return (int)(fruitCount * 100 * (1 + (fruitCount - 3) * 1f));
        }

        /// <summary>
        /// �X�R�A��ǉ�
        /// </summary>
        /// <param name="score">�ǉ�����X�R�A</param>
        private void AddScore(int score)
        {
            _score += score;
            ScoreText.text = _score.ToString();
        }

        /// <summary>
        /// �x�[�X�X�R�A��ǉ�
        /// </summary>
        public void AddBaseScore()
        {
            saveManager.SaveBaseScore(_baseScore += _additionalBaseScore);
        }

        /// <summary>
        /// �v���C���Ԃ����Z����
        /// </summary>
        public void AddPlayTime()
        {
            saveManager.SavePlayTime(_playTime += _additionalPlayTime);
        }
    }
}