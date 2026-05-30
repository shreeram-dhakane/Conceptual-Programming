#include <stdio.h>
#include <stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    int bFoundNonZero = 0;

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
        if (iDigit != 0)
        {
            iMult *= iDigit;
            bFoundNonZero = 1;
        }
        iNo = iNo / 10;
    }

    return bFoundNonZero ? iMult : 0;
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

    iRet = MultDigits(iValue);
    printf("%d\n", iRet);
    return 0;
}
