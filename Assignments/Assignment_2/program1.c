//Accept one number from user and print that number of * on screen
#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;
    //write Updater
    while(icnt <= ino)
    {
        printf("*");
        icnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}