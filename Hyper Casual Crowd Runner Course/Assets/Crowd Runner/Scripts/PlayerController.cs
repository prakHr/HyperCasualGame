using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public static PlayerController instance;

    [Header(" Elements ")]
    [SerializeField] private CrowdSystem crowdSystem;
    [SerializeField] private PlayerAnimator playerAnimator;

    [Header(" Settings ")]
    [SerializeField] private float moveSpeed;
    private bool canMove;

    [Header(" Control ")]
    [SerializeField] private float slideSpeed;
    private Vector3 clickedScreenPosition;
    private Vector3 clickedPlayerPosition;

    private void Awake()
    {
        if (instance != null)
            Destroy(gameObject);
        else
            instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        GameManager.onGameStateChanged += GameStateChangedCallback;
    }
    private void OnDestroy()
    {
        GameManager.onGameStateChanged -= GameStateChangedCallback;
    }

    // Update is called once per frame
    void Update()
    {
        if (canMove)
        {
            MoveForward();
            ManageControl();
        }
        
    }
    private void GameStateChangedCallback(GameManager.GameState gameState)
    {
        if (gameState == GameManager.GameState.Game)
        {
            StartMoving();
        }
        else if (gameState == GameManager.GameState.Gameover)
        {
            StopMoving();
        }
        else if (gameState == GameManager.GameState.LevelComplete)
        {
            StopMoving();
        }
    }
    private void StartMoving()
    {
        canMove = true;
        playerAnimator.Run();
    }
    private void StopMoving()
    {
        canMove = false;
        playerAnimator.Idle();

    }
    private void MoveForward()
    {
        transform.position += Vector3.forward * Time.deltaTime * moveSpeed;
    }
    private void ManageControl()
    {
        if (Input.GetMouseButtonDown(0))
        {
            clickedScreenPosition = Input.mousePosition;
            clickedPlayerPosition = transform.position;
        }
        else if (Input.GetMouseButton(0))
        {
            float roadWidth = 10;
            float xScreenDifference = Input.mousePosition.x - clickedScreenPosition.x;
            xScreenDifference /= Screen.width;
            xScreenDifference *= slideSpeed;
            Vector3 position = transform.position;
            position.x = clickedPlayerPosition.x + xScreenDifference;
           // Debug.Log("crowdSystem.GetCrowdRadius() = " + crowdSystem.GetCrowdRadius());
            //if (position.x < -5.6)
            //{
              //  position.x = -5.6f;
            //}
           position.x = Mathf.Clamp(position.x, -roadWidth/2+crowdSystem.GetCrowdRadius(), roadWidth/2-crowdSystem.GetCrowdRadius());
            transform.position = position;
            //transform.position = clickedPlayerPosition + Vector3.right * xScreenDifference;
        }
    }
}
