//write a program which accept number from user and return summation of all its non factors.
/*
  intput : 12
  output: 50

  intput : 10
  output: 37
*/


#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
