using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    public class Bom : MonoBehaviour
    {
        /// <summary>
        /// �}�E�X�_�E���C�x���g
        /// </summary>
        private void OnMouseDown()
        {
            StartCoroutine(LevelManager.Instance.BomDown(this));
        }
    }
}
