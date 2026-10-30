//write a program which acept n and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int ino)
{
    int iCnt = 0;
     
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",ino * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}