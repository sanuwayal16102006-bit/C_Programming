//Write a program whitch accept number from user and print even factors of that number.
/*
//Input : 24
//Output : 1   2   4   6   8    12
*/
#include<stdio.h>

void DisplayFactor( int ino)
{
    int i = 0;

    if(ino <= 0)
    {
        ino = -ino;
    }

    for(i = 1; i <= ino; i++)
    {
        if((ino % i == 0)&& (i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("ENter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}