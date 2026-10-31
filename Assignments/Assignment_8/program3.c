//write a program to find factorial of give number

#include<stdio.h>

int Factorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}