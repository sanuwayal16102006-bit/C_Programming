//write a program which accept range from user and return addition of all even nmbers in between that range.(Range should contains positive nubmers only)
/*
  input : 23  30
  output: 108 

  input : 10  18
  output:  70

  input : -10  2
  output : -Invalid range

  input : 90  18
  output : Invalid range
*/


#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d", &iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iValue1 > 0 && iValue2 > 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d\n",iRet);
    }

    return EXIT_SUCCESS;
}
