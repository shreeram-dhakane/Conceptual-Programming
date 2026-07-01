/*
Input :
10
15

Output :
2 4
*/

#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 1;
    int iPos = 1;

    while(iMask != 0)
    {
        if(((iNo1 & iMask) != 0) && ((iNo2 & iMask) != 0))
        {
            printf("%d ",iPos);
        }

        iMask = iMask << 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number : ");
    scanf("%u",&iValue1);

    printf("Enter second number : ");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}