#include<stdio.h>

double CircleArea(float fRadius)
{
    double area = 0.0;

    area = 3.14 * fRadius * fRadius;

    return area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return 0;
}