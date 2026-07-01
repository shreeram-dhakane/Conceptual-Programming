/*
Input :
11

Output :
3
*/

#include <stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCnt++;
        }
        iNo = iNo >> 1;
    }

    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("%d\n",iRet);

    return 0;
}