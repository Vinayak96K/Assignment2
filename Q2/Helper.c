#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayEvenFactor
//  Description: Accepts one number and displays its even factor.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo!=0)
    {
        printf("Even factors of %d:",iNo);
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0 && iCnt%2==0)
            {
                printf("%d\t",iCnt);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Error:Number equal to 0\n");
        return;
    }
}