//Write a program whitch accept number from user and print that number of $ & * on screen.
#include<stdio.h>

void Pattern(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}