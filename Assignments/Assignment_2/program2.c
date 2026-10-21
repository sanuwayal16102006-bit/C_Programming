//Accept one number from user and print that number of * on screen
#include<stdio.h>

void Display(int ino)
{
    //write Updater
    while(ino > 0)
    {
        printf("*");
        ino--;
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