#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if (iNo == 0)
    {
        return TRUE;
    }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        if ((iNo % 10) == 0)
        {
            return TRUE;
        }
        iNo /= 10;
    }

    return FALSE;
}

int main(void)
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    bRet = ChkZero(iValue);
    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}

