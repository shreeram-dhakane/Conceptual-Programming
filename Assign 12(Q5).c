#include <stdio.h>

/*
 Time Complexity: O(d)
 This program counts digits less than 6 in the input number.
*/

int Count(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount = 0;
    if (iNo == 0)
    {
        return 1; // 0 is less than 6
    }

    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        if (iDigit < 6)
        {
            iCount++;
        }
        iNo /= 10;
    }
    return iCount;
}

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    iRet = Count(iValue);
    printf("%d\n", iRet);
    return 0;
}

