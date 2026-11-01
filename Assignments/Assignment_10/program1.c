//erite a program which accept redious of circle from usre and calculate its area. consider value of PI as 3.14.(Area = PI * Redious * Redious)
/*
//input: 5.3
//output: 88.2026
//input: 10.4
//output: 339.6224
*/

#include<stdio.h>

double CircleArea(float fRedious)
{
    double dArea = 0.0;

    dArea = 3.14 * fRedious * fRedious;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radious");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4lf\n",dRet);

    return 0;
}