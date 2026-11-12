//Accept number from user and display below pattern.
/*
  input : 5
  output: A  B  C  D  E
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt - 1);
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
