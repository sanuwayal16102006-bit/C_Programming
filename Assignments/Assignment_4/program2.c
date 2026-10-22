//accept an integer from the user and drtermine whether it is even or odd. An even number is completed divisible by 2.
/*
//input: 24 -> even number
//input: 17 -> odd number
*/

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}