#include <stdio.h>

/*
 Time Complexity: O(n)
 This program checks the range and prints even numbers only, so execution grows with the number of values.
*/

void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    int iFirst = iStart;
    if (iFirst % 2 != 0)
    {
        iFirst++;
    }

    if (iFirst > iEnd)
    {
        printf("\n");
        return;
    }

    for (int i = iFirst; i <= iEnd; i += 2)
    {
        if (i > iFirst)
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

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}

