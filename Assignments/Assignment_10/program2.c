//write a program which accept width & height of rectangle from usre and calculate its area.(Area = Width * Height)
/*
    input : 5.3  9.78
    output : 51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width");
    scanf("%f",&fValue1);

    printf("Enter width");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n", dRet);

    return 0;
}