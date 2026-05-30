#include <stdio.h>
#include <stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit >= 3 && iDigit <= 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    iRet = CountRange(iValue);
    printf("%d\n", iRet);
    return 0;
}
