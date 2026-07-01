/*
Input:
Enter a number: 136347712

Output:
7th, 15th, 21st and 28th bits are ON.
*/

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08204040;   // 7th, 15th, 21st and 28th bits

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
        printf("7th, 15th, 21st and 28th bits are ON.\n");
    }
    else
    {
        printf("One or more bits are OFF.\n");
    }

    return 0;
}