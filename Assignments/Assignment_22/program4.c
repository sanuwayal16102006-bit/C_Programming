//Accept number from user and display below pattern.
/*
  input : 4
  output: #    1    *    #    2    *    #    3    *    #    4    *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
        printf("%d\t", iCnt);
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
