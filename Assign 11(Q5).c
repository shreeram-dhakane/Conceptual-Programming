#include <stdio.h>

/*
 Time Complexity: O(n)
 This program prints the range in reverse order, so execution scales with the number of values.
*/

void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (int i = iEnd; i >= iStart; i--)
    {
        if (i < iEnd)
        {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");
}

int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;

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

    RangeDisplayRev(iValue1, iValue2);
    return 0;
}

