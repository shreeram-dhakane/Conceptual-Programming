#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iRet = -1;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            iRet = i;
        }
    }

    return iRet;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
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

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (scanf("%d", &p[iCnt]) != 1)
        {
            printf("Invalid input\n");
            free(p);
            return 1;
        }
    }

    printf("Enter number to search:\n");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        free(p);
        return 1;
    }

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is %d\n", iRet);
    }

    free(p);
    return 0;
}
