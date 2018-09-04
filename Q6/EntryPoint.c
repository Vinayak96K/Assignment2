#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iNo1,iNo2;

    printf("Enter two numbers:");
    scanf("%d%d",&iNo1,&iNo2);

    printf("Value of iNo1:%d and iNo2:%d before swapping.\n",iNo1,iNo2);
    
    Swap(&iNo1,&iNo2);
    printf("Value of iNo1:%d and iNo2:%d after swapping.\n",iNo1,iNo2);

    return 0;
}
