#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Swap
//  Description: Accepts two addresses of char variables and swap the values stored at the pointed address.
//  Input: &char[IN,IN] 
//  Output: NA
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Swap(char *ptr1,char *ptr2)
{
    char temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}