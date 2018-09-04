#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1,iValue2;

    printf("Enter two numbers:");
    scanf("%d%d",&iValue1,&iValue2);

    DisplayComFactor(iValue1,iValue2);

    return 0;
}
