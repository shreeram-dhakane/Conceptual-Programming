#include <stdio.h>

/*
 Time Complexity: O(1)
 This program performs a fixed number of operations regardless of input size.
*/

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometres: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    iRet = KMtoMeter(iValue);
    printf("%d\n", iRet);

    return 0;
}

