/*

Input :
Marvellous Multi OS
M

Output :
Character location is : 11

--------------------------------

Input :
Marvellous Multi OS
W

Output :
Character location is : -1

--------------------------------

Input :
Marvellous Multi OS
e

Output :
Character location is : 4

*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iIndex;
        }

        iIndex++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0;
}