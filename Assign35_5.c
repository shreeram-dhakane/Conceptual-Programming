/*
Input:
Enter a number: 2147483649

Output:
1st and 32nd bits are ON.
*/

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;   // 1st and 32nd bits

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("1st and 32nd bits are ON.\n");
    }
    else
    {
        printf("Either 1st bit or 32nd bit is OFF.\n");
    }

    return 0;
}