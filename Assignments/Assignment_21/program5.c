//Accept number of rows and number of columns from user and display below pattern.
/*
   1   1   1   1
   2   2   2   2
   3   3   3   3
   4   4   4   4
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iRow; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
