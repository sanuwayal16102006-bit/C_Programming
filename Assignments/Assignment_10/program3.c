//write a program which accept distance in kilometer and convert it into meter.(1 kilometer = 1000 meter)
/*
  input : 5
  output : 5000

  input : 12
  output : 12000
*/

#include<stdio.h>

int KMtoMeter(int ino)
{
    int iMeter = 0;

    iMeter = ino * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}