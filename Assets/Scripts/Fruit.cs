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
        /// �I�����
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
        /// �I����Ԃɂ���
        /// </summary>
        /// <param name="isSelect">�I�����</param>
        public void SetSelect(bool isSelect)
        {
            IsSelect = isSelect;
            SelectObj.SetActive(IsSelect);
        }

        /// <summary>
        /// ������Ԃɂ���
        /// </summary>
        /// <param name="isExplosion">�I�����</param>
        public void SetExplosion(bool isExplosion)
        {
            ExplosionObj.SetActive(isExplosion);
        }

        /// <summary>
        /// �{�f�B�̕\���E��\��
        /// </summary>
        /// <param name="flag"></param>
        public void SetActiveBody(bool flag)
        {
            BodyObj.SetActive(flag);
        }

        /// <summary>
        /// �t���[�c�̕\���E��\��
        /// </summary>
        /// <param name="flag">�t���O</param>
        public void SetActive(bool flag)
        {
            gameObject.GetComponent<SpriteRenderer>().enabled = flag;
        }
    }
}