//Q1. Program to Divide two numbers
#include<stdio.h>

int Divide(int ino1, int ino2)
{
    int iAns = 0;

    if(ino2 == 0)
    {
        return -1;
    }

    iAns = ino1 / ino2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d",iRet);

    return 0;
}