#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Fibonnaci
//  Description: Prints fibonnaci series of the given number.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Fibonacci(int iNum)
{
    int iCnt=0;
    if(iNum>=2)
    {
    int *iptr=(int *) calloc(iNum,4);
    iptr[0]=0;
    iptr[1]=1;

    printf("Fibonnaci series of %d:%d\t%d\t",iNum,iptr[0],iptr[1]);
    for(iCnt=2;iCnt<=iNum;iCnt++)
    {
        iptr[iCnt]=iptr[iCnt-1]+iptr[iCnt-2];
        printf("%d\t",iptr[iCnt]);
    }
    printf("\n");
    free(iptr);
    }
    else
    {
        return;
    }
}