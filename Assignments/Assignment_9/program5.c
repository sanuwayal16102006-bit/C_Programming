//write a program which returns different between Even and odd factorial of give number.
/*
//input: 5
//output: -7  (8 - 15)
//input: -5
//output: -7  (8 - 15)
//input: 10
//output: 2895  (3840 - 945)
*/

#include<stdio.h>

int FactorialDiff(int ino)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(iCnt = ino; iCnt >= 1; iCnt-- )
    {
        if(iCnt % 2 != 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd Factorial difference is %d",iRet);

    return 0;
}