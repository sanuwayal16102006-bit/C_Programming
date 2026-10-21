//Q5. Accept one number from user and print that number of * on screen.
#include<stdio.h>

void Accept(int ino)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}