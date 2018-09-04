#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cCh1,cCh2;

    printf("Enter two characters:");
    scanf("%c %c",&cCh1,&cCh2);

    printf("Value of cCh1:%c and cCh2:%c before swapping.\n",cCh1,cCh2);

    Swap(&cCh1,&cCh2);
    printf("Value of cCh1:%c and cCh2:%c after swapping.\n",cCh1,cCh2);
    return 0;
}
