//write a program which accept number from user and display below pattern.
/*
//input:  5
//outout: *  *  *  *  *  #  #  #  #  #
//input:  6
//output: *  *  *  *  *  * #  #  #  #  #  #
//input: -5
//output: *  *  *  *  *  #  #  #  #  #
//input: 2
//output: *  *  #  #  
*/

#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}