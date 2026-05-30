#include <stdio.h>

/*
 Time Complexity: O(d)
 This program examines each digit once, where d is the digit count.
*/

int CountTwo(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCount = 0;
    while (iNo != 0)
    {
        if ((iNo % 10) == 2)
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

    iRet = CountTwo(iValue);
    printf("%d\n", iRet);
    return 0;
}

