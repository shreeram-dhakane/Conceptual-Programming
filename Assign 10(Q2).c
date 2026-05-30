#include <stdio.h>

/*
 Time Complexity: O(1)
 This program performs a fixed number of operations regardless of input size.
*/

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main(void)
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    if (scanf("%f", &fValue1) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter height: ");
    if (scanf("%f", &fValue2) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    dRet = RectArea(fValue1, fValue2);
    printf("%.3f\n", dRet);

    return 0;
}

