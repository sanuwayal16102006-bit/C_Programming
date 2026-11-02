//write a program which accept number from user and return multiplication of all digits.

/*
  input: 2395
  output: 270

  input: 1018
  output: 8

  input: 9440
  output: 144

  input: 922432
  output: 464

*/


#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iMul = iMul * iDigit;

        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication is %d", iRet);

    return 0;
}
