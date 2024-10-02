using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fruits
{
    public class Bom : MonoBehaviour
    {
        /// <summary>
        /// マウスダウンイベント
        /// </summary>
        private void OnMouseDown()
        {
            StartCoroutine(LevelManager.Instance.BomDown(this));
        }
    }
}
