#include <stdio.h>

/*
 Time Complexity: O(d)
 This program processes each digit of the number once, where d is digit count.
*/

void DisplayDigit(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo /= 10;
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    DisplayDigit(iValue);
    return 0;
}

