//Write a program whitch accept one number from user and print that number of even nymbers on screen.
/*
//Input : 7
//Output : 2   3   6   8   10   12   14
*/

#include<stdio.h>

void PrintEvent(int ino)
{
    int icnt = 0;

    if(ino <= 0)
    {
        return;
    }
    for(icnt = 1;icnt <= ino; icnt++)
    {
        printf("%d\t",icnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter numer :\n");
    scanf("%d",&iValue);

    PrintEvent(iValue);

    return 0;
}