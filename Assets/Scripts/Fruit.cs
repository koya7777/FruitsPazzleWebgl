using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    public class Fruit : MonoBehaviour
    {
        public string ID;
        [SerializeField] GameObject SelectObj;
        [SerializeField] GameObject ExplosionObj;
        [SerializeField] GameObject BodyObj;

        /// <summary>
        /// 選択状態
        /// </summary>
        public bool IsSelect { get; private set; }

        private void OnMouseDown()
        {
            LevelManager.Instance.FruitDown(this);
        }

        private void OnMouseEnter()
        {
            LevelManager.Instance.FruitEnter(this);
        }

        private void OnMouseUp()
        {
            StartCoroutine(LevelManager.Instance.FruitUp());
        }

        /// <summary>
        /// 選択状態にする
        /// </summary>
        /// <param name="isSelect">選択状態</param>
        public void SetSelect(bool isSelect)
        {
            IsSelect = isSelect;
            SelectObj.SetActive(IsSelect);
        }

        /// <summary>
        /// 爆発状態にする
        /// </summary>
        /// <param name="isExplosion">選択状態</param>
        public void SetExplosion(bool isExplosion)
        {
            ExplosionObj.SetActive(isExplosion);
        }

        /// <summary>
        /// ボディの表示・非表示
        /// </summary>
        /// <param name="flag"></param>
        public void SetActiveBody(bool flag)
        {
            BodyObj.SetActive(flag);
        }

        /// <summary>
        /// フルーツの表示・非表示
        /// </summary>
        /// <param name="flag">フラグ</param>
        public void SetActive(bool flag)
        {
            gameObject.GetComponent<SpriteRenderer>().enabled = flag;
        }
    }
}