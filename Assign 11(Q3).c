#include <stdio.h>

/*
 Time Complexity: O(n)
 This program sums numbers in the range, so execution grows with the number of values.
*/

int RangeSum(int iStart, int iEnd)
{
    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1; // indicates invalid range
    }

    int iSum = 0;
    for (int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }
    return iSum;
}

int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    iRet = RangeSum(iValue1, iValue2);
    if (iRet < 0)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("%d\n", iRet);
    }

    return 0;
}

