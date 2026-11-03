//write a program which number from user and display its multipliicaton of factors.
/*
  intput : 12
  output: 144

  intput : 13
  output: 1

  intput : 10
  output: 10
*/

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}