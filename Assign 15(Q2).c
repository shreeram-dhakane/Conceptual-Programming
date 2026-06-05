#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return i + 1; // 1-based index
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0, i = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &iSize) != 1 || iSize <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter the number: ");
    if (scanf("%d", &iValue) != 1)
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

    printf("Enter %d elements:\n", iSize);
    for (i = 0; i < iSize; i++)
    {
        if (scanf("%d", &p[i]) != 1)
        {
            printf("Invalid input\n");
            free(p);
            return 1;
        }
    }

    iRet = FirstOcc(p, iSize, iValue);
    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is %d\n", iRet);
    }

    free(p);
    return 0;
}

