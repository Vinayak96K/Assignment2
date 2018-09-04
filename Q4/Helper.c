#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayComFactorLarge
//  Description: Accpets two numbers and displays largest common factor.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void DisplayComFactorLarge(int iNo1,int iNo2)
{
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }

    if(iNo1!=0 && iNo2!=0)
    {
        int iMin= ((iNo1>iNo2)?iNo2:iNo1);
        int iCnt=0, iAns;

        for(iCnt=1;iCnt<=iMin/2;iCnt++)
        {
            if(iNo1%iCnt==0 && iNo2%iCnt==0)
            {
            iAns=iCnt;
            }
        }

        printf("Largest Commons factor of %d and %d:%d\n",iNo1,iNo2,iAns);
    }
    else
    {
        printf("Error:Incorrect input.\n");
        return;
    }
}