//write a program to fine even factorial of give number.
/*
//input: 5
//output: 8  (4 * 2)
//input: -5
//output: 8  (4 * 2)
//input: 10
//output: 3840  (10 * 8 * 6 * 4 * 2)
*/

#include<stdio.h>

int EveFactorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(iCnt = ino; iCnt >= 1; iCnt-- )
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n ");
    scanf("%d",&iValue);

    iRet = EveFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}