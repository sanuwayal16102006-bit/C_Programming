//write a program which accepts N from user and print all odd numbers up to N.
#include<stdio.h>

void OddDisplay(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
        printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}