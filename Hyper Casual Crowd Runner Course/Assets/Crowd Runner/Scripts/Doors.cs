using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public enum BonusType { Addition, Difference, Product, Division }

public class Doors : MonoBehaviour
{
    [Header(" Elements ")]
    [SerializeField] private SpriteRenderer rightDoorRenderer;
    [SerializeField] private SpriteRenderer leftDoorRenderer;
    [SerializeField] private TextMeshPro rightDoorText;
    [SerializeField] private TextMeshPro leftDoorText;
    [SerializeField] private Collider collider;

    [Header(" Settings ")]
    [SerializeField] private BonusType rightDoorBonusType;
    [SerializeField] private int rightDoorBonusAmount;

    [SerializeField] private BonusType leftDoorBonusType;
    [SerializeField] private int leftDoorBonusAmount;

    [SerializeField] private Color bonusColor;
    [SerializeField] private Color penaltyColor;


    // Start is called before the first frame update
    void Start()
    {
        ConfigureDoors();    
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void ConfigureDoors()
    {
        // Configure the right door
        switch (rightDoorBonusType)
        {
            case BonusType.Addition:
                rightDoorRenderer.color = bonusColor;
                rightDoorText.text = "+" + rightDoorBonusAmount;
                break;
            case BonusType.Difference:
                rightDoorRenderer.color = penaltyColor;
                rightDoorText.text = "-" + rightDoorBonusAmount;
                break;
            case BonusType.Product:
                rightDoorRenderer.color = bonusColor;
                rightDoorText.text = "X" + rightDoorBonusAmount;
                break;
            case BonusType.Division:
                rightDoorRenderer.color = penaltyColor;
                rightDoorText.text = "/" + rightDoorBonusAmount;
                break;

        }
        // Configure the right door
        switch (leftDoorBonusType)
        {
            case BonusType.Addition:
                leftDoorRenderer.color = bonusColor;
                leftDoorText.text = "+" + leftDoorBonusAmount;
                break;
            case BonusType.Difference:
                leftDoorRenderer.color = penaltyColor;
                leftDoorText.text = "-" + leftDoorBonusAmount;
                break;
            case BonusType.Product:
                leftDoorRenderer.color = bonusColor;
                leftDoorText.text = "X" + leftDoorBonusAmount;
                break;
            case BonusType.Division:
                leftDoorRenderer.color = penaltyColor;
                leftDoorText.text = "/" + leftDoorBonusAmount;
                break;

        }
        /*
        if (rightDoorBonusType == BonusType.Addition)
        {
           // Debug.Log("bonusColor="+bonusColor);
           rightDoorRenderer.color = bonusColor;
           rightDoorText.text = "+" + rightDoorBonusAmount;

        }
       else if (rightDoorBonusType == BonusType.Difference)
        {
            //Debug.Log("penaltyColor="+penaltyColor);

            rightDoorRenderer.color = penaltyColor;
            rightDoorText.text = "-" + rightDoorBonusAmount;
        }

        
        // Configure the left door
        if (leftDoorBonusType == BonusType.Addition)
        {
            // Debug.Log("bonusColor="+bonusColor);
            leftDoorRenderer.color = bonusColor;
            leftDoorText.text = "+" + leftDoorBonusAmount;

        }
        else if (leftDoorBonusType == BonusType.Difference)
        {
            //Debug.Log("penaltyColor="+penaltyColor);

            leftDoorRenderer.color = penaltyColor;
            leftDoorText.text = "-" + leftDoorBonusAmount;
        }
        */

    }
    public int GetBonusAmount(float xPosition)
    {
        if (xPosition > 0) return rightDoorBonusAmount;
        else return leftDoorBonusAmount;
    }
    public BonusType GetBonusType(float xPosition)
    {
        if (xPosition > 0) return rightDoorBonusType;
        else return leftDoorBonusType;
    }
    public void Disable()
    {
        collider.enabled = false;
        
    }
}
