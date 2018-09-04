#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: PrintEven
//  Description: Accepts one number print that number of even numbers.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        printf("Error:Incorrect input.\n");
        return;
    }

    int iCnt=0;
    printf("%d even numbers:",iNo);
    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }

    }
    printf("\n");


}
