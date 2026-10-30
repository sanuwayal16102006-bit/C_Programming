//write a progrm which accept number from usre and print its nmbers line.
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    for(iCnt = -ino; iCnt <= ino; iCnt++)
    {
        printf("%d\t",iCnt);
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