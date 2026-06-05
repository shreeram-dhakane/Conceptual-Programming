#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    int found = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d ", Arr[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No elements found in the given range");
    }

    printf("\n");
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    if (scanf("%d", &iSize) != 1 || iSize <= 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1;
    }

    printf("Enter the starting point\n");
    if (scanf("%d", &iStart) != 1)
    {
        printf("Invalid input\n");
        free(p);
        return 1;
    }

    printf("Enter the ending point\n");
    if (scanf("%d", &iEnd) != 1)
    {
        printf("Invalid input\n");
        free(p);
        return 1;
    }

    printf("Enter %d elements\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (scanf("%d", &p[iCnt]) != 1)
        {
            printf("Invalid input\n");
            free(p);
            return 1;
        }
    }

    Range(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}

