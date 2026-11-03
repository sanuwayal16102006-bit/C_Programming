//write a program which accept number from user and display its factors in decreasing order.
/*
  intput : 12
  output: 6  4  3  2  1

  intput : 13
  output: 1

  intput : 10
  output: 5  2  1
*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int ino)
{
    int iCnt = 0;

    for(iCnt = ino/2; iCnt >= 1; iCnt--)
    {
        if(ino % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}