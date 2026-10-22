//Accept three ingegers and determine the greatest number among them. the program must also work correctly when two or all three numbers are equal
/*
//input: 10  50  30  ->  50 is greatest
//input: 40  40  20  ->  40 is greatest
//input: 15  15  15  ->  15 is greatest
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return 0;
}