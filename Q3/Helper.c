#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayComFactor
//  Description: Accepts two number and displays common factor.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void DisplayComFactor(int iNo1,int iNo2)
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
        int iCnt=1;

        printf("Common factor of %d and %d:",iNo1,iNo2);
        while(iCnt<=iMin/2)
        {
            if(iNo1%iCnt==0 && iNo2%iCnt==0)
            {
                printf("%d\t",iCnt);
            }
            iCnt++;
        }
        printf("\n");


    }
    else
    {
        printf("Error:Incorrect input.\n");
        return;
    }

}