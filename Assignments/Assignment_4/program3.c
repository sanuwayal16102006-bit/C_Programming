//accept two integers and determin whitch number is greater. if both numbers are equal, display an appropriate message
/*
//input: 10  20 -> 20 is greate
//input: 50  30 -> 50 is greater
//input: 15  15 -> both numbers are equal
*/
#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return 0;
}