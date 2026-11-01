//Accept Amout in US dollar and return its corresponding value in indian currency. consider 1$ as 70 rupees.
/*
// input: 10
//output: 700
// input: 3
//output: 270
// input: 1200
//output: 84000
*/

#include<stdio.h>

int DollerToINR(int ino)
{

    int iRet = 0;

    iRet = ino * 70;

    return iRet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("value in INR id %d\n",iRet);

    return 0;
}