using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimator : MonoBehaviour
{
    [Header(" Elements ")]
    [SerializeField] private Transform runnersParent;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Run()
    {
        //if (runnersParent != null)
        //{
            for (int i = 0; i < runnersParent.childCount; i++)
            {
                Transform runner = runnersParent.GetChild(i);
                Animator runnerAnimator = runner.GetComponent<Animator>();
                runnerAnimator.Play("Run");
            }
        //}
        
    }
    public void Idle()
    {
        //if (runnersParent != null)
        //{
            for (int i = 0; i < runnersParent.childCount; i++)
            {
                Transform runner = runnersParent.GetChild(i);
                Animator runnerAnimator = runner.GetComponent<Animator>();
                runnerAnimator.Play("Idle");
            }
        //}
            
    }
}
