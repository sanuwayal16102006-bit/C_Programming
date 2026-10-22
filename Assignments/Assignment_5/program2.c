//Accept a year and determine whether it is a leap year acccording to gregorian calenderrules. Ayear is a leap if it is divisilbe by 400, or divisible by 4 but not by 100. consider years less than pr equals to zero invalid
/*
//input: 2024 -> leap year
//input: 1900  -> not a leap year
//input: 2000  -> leap year
*/
#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if(iYear % 100 == 0)
    {
        printf("Not a Leap Year\n");
    }
    else if(iYear % 4 == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return 0;
}