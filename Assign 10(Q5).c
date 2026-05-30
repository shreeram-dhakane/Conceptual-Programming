#include <stdio.h>

/*
 Time Complexity: O(1)
 This program performs a fixed number of operations regardless of input size.
*/

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main(void)
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    dRet = SquareMeter(iValue);
    printf("%.6f\n", dRet);

    return 0;
}

