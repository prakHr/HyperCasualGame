using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Runner : MonoBehaviour
{
    [Header(" Settings ")]
    private bool isTarget;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SetTarget()
    {
        isTarget = true;
    }
    public bool IsTarget()
    {
        return isTarget;
    }
}
