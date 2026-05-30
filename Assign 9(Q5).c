#include <stdio.h>
#include <stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo /= 10;
    }

    return iEvenSum - iOddSum;
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

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}
