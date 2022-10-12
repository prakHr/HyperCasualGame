using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGroupNew : MonoBehaviour
{
    
    [Header(" Elements ")]
    [SerializeField] private Enemy enemyPrefab;
    [SerializeField] private Transform enemiesParent;


    [Header(" Settings ")]
    [SerializeField] private int amount;
    [SerializeField] private float radius;
    [SerializeField] private float angle;
    
    // Start is called before the first frame update
    void Start()
    {
        GenerateEnemies();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void GenerateEnemies()
    {
        for (int i = 0; i < amount; i++)
        {
            Vector3 enemyLocalPosition = GetRunnerLocalPosition(i);
            Vector3 enemyWorldPosition = transform.TransformPoint(enemyLocalPosition);
            Instantiate(enemyPrefab, enemyWorldPosition, Quaternion.identity, transform);
            //Instantiate(enemyPrefab, enemyLocalPosition, Quaternion.identity, transform);
        }
    }
    private Vector3 GetRunnerLocalPosition(int index)
    {
        float x = radius * Mathf.Sqrt(index) * Mathf.Cos(Mathf.Deg2Rad * index * angle);
        float z = radius * Mathf.Sqrt(index) * Mathf.Sin(Mathf.Deg2Rad * index * angle);
        return new Vector3(x, 0, z);
    }
}
