/*
Input:
10

Output:
160
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iFirst = (iNo & 0x0F);
    UINT iLast = (iNo & 0xF0);

    iNo = iNo & 0xFFFFFF00;

    iNo = iNo | (iFirst << 4);
    iNo = iNo | (iLast >> 4);

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %u\n",iRet);

    return 0;
}