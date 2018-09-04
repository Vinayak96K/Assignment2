#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Display
//  Description: Displays number of star (*) on he screen.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Display(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }

    if(iValue>0)
    {
        while(iValue>0)
        {
            printf("*\t");
            iValue--;
        }
    }
    else
    {
        return;
    }

}