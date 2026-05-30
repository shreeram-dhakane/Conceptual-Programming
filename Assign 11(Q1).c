#include <stdio.h>

/*
 Time Complexity: O(n)
 This program prints all numbers in the given range, so execution scales with the number of values.
*/

void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (int i = iStart; i <= iEnd; i++)
    {
        if (i > iStart)
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

    RangeDisplay(iValue1, iValue2);
    return 0;
}

