#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Swap
//  Description: Accepts two number in two pointers and swap the values stored at the pointed location.
//  Input:int[IN,IN] 
//  Output: NA
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////

void Swap(int *ptr1,int *ptr2)
{
    int *ptr3=(int *) malloc(4);

    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;

    free(ptr3);
    
}