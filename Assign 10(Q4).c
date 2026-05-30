#include <stdio.h>

/*
 Time Complexity: O(1)
 This program performs a fixed number of operations regardless of input size.
*/

double FhtoCs(float fTemp)
{
    return (fTemp - 32.0f) * (5.0 / 9.0);
}

int main(void)
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    dRet = FhtoCs(fValue);
    printf("%.5f\n", dRet);

    return 0;
}

