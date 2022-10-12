using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChunkManager : MonoBehaviour
{
    public static ChunkManager instance;

    [Header(" Elements ")]
    [SerializeField] private LevelSO[] levels;
    [SerializeField] private Chunk[] levelChunks;

    //[SerializeField] private Chunk[] chunksPrefabs;
    private GameObject finishLine;
    // Start is called before the first frame update
    private void Awake()
    {
        if (instance != null)
            Destroy(gameObject);
        else
            instance = this;
    }
    void Start()
    {
        //CreateRandomLevel();
        //CreateOrderedLevel();
        GenerateLevel();
        finishLine = GameObject.FindWithTag("Finish");
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void GenerateLevel()
    {
        int currentLevel = GetLevel();
        currentLevel = currentLevel % levels.Length;
        
        LevelSO level = levels[currentLevel];

        CreateLevel(level.chunks);

    }

    
    private void CreateLevel(Chunk[] levelChunks)
    {
        Vector3 chunkPosition = Vector3.zero;
        for (int i = 0; i < levelChunks.Length; i++)
        {
            Chunk chunkToCreate = levelChunks[i];
            if (i > 0) chunkPosition.z += chunkToCreate.GetLength();
            //chunkPosition.z = i * 15;
            Chunk chunkInstance = Instantiate(chunkToCreate, chunkPosition, Quaternion.identity, transform);
            chunkPosition.z += (chunkInstance.GetLength() + 10);
        }
    }
    
    
    public void CreateOrderedLevel()
    {
        finishLine = GameObject.FindWithTag("Finish");
        //Debug.Log("finishLine + " + finishLine);
        if (finishLine != null)
            Destroy(finishLine.gameObject);
        Vector3 chunkPosition = Vector3.zero;
        for (int i = 0; i < 20; i++)
        {
            Chunk chunkToCreate = levelChunks[0];
            if (i > 0) chunkPosition.z += chunkToCreate.GetLength()+20;
            //chunkPosition.z = i * 15;
            Chunk chunkInstance = Instantiate(chunkToCreate, chunkPosition, Quaternion.identity, transform);
            
            chunkPosition.z += (chunkInstance.GetLength() + 20);
            
        }
    }
    /*
    private void CreateRandomLevel()
    {
        Vector3 chunkPosition = Vector3.zero;
        for (int i = 0; i < 5; i++)
        {
            Chunk chunkToCreate = chunksPrefabs[Random.Range(0, chunksPrefabs.Length)];
            if (i > 0) chunkPosition.z += chunkToCreate.GetLength();
            //chunkPosition.z = i * 15;
            Chunk chunkInstance = Instantiate(chunkToCreate, chunkPosition, Quaternion.identity, transform);
            chunkPosition.z += (chunkInstance.GetLength() + 10);
        }
    }
    */
    public float GetFinishZ()
    {
        return finishLine.transform.position.z;

    }
    public int GetLevel()
    {
        return PlayerPrefs.GetInt("level",0);
    }
}
