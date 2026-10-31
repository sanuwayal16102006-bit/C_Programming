//write a rogrm which accept number from user and if number is less tha 50 then print small, if it is greater than 50 and less than 100 then print medimum, if it is greater than 100 then print large.
#include<stdio.h>

void Number(int ino)
{

    if(ino < 50)
    {
        printf("small\n");
    }
    else if (ino > 50 && ino < 100)
    {
        printf("medium\n");
    }
    else
    {
        printf("large");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}