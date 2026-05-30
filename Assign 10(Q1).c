#include <stdio.h>

#define PI 3.14

/*
 Time Complexity: O(1)
 This program performs a fixed number of operations regardless of input size.
*/

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    if (scanf("%f", &fValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    dRet = CircleArea(fValue);
    printf("%.4f\n", dRet);

    return 0;
}

