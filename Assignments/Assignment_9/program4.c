//write a program to fine odd factorial of give number.
/*
//input: 5
//output: 15  (5 * 3 * 1)
//input: -5
//output: 15  (5 * 3 * 1)
//input: 10
//output: 945  (9 * 7 * 5 * 3 * 1)
*/

#include<stdio.h>

int OddFactorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(iCnt = ino; iCnt >= 1; iCnt-- )
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}