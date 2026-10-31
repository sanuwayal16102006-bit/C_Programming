//write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void TableRev(int ino)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",ino * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}