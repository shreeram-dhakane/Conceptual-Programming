#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iValue = 0, i = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);
    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);
    return 0;
}

