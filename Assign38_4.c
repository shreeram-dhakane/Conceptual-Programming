/*
Input :
10
3
7

Output :
TRUE
*/

#include <stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask = (1 << (iPos1 - 1)) | (1 << (iPos2 - 1));

    if((iNo & iMask) != 0)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    UINT iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter first position : ");
    scanf("%d",&iPos1);

    printf("Enter second position : ");
    scanf("%d",&iPos2);

    bRet = ChkBit(iValue,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}