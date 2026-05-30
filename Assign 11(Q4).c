#include <stdio.h>

/*
 Time Complexity: O(n)
 This program sums even numbers in the given range, so execution grows with range size.
*/

int RangeSumEven(int iStart, int iEnd)
{
    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
    }

    int iSum = 0;
    int iFirst = iStart;
    if (iFirst % 2 != 0)
    {
        iFirst++;
    }

    for (int i = iFirst; i <= iEnd; i += 2)
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

    iRet = RangeSumEven(iValue1, iValue2);
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

