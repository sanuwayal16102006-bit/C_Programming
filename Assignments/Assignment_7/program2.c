//write a program which accept number from user and print numbers till that number.
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}