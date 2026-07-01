/*
Input :
897
9
13

Output :
385
*/

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    int i = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter start position : ");
    scanf("%d",&iStart);

    printf("Enter end position : ");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("%u\n",iRet);

    return 0;
}