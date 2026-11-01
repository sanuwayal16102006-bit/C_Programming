//write a program which accept tempeture in fahrenheit and convert it into celcious. (1 celcious = (fahrenhit - 32) *(5/9))
/*
    input : 10
    output : -12.2222  (10 - 32) * (5/9)

    input : 34
    output : 1.11111  (34 - 32) * (5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter tempeture in Fahrenheit : \n");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %.4lf\n", dRet);

    return 0;
}