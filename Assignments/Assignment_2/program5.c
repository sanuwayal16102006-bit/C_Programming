//Accept number from user and cheack whrther number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent(int ino)
{
    if((ino % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("enter number");
    scanf("%d",&iValue);

    bret = ChkEvent(iValue);

    //Display result
    if(bret == TRUE)
    {
        prinf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}