/*

Input :
Marvellous Multi OS
M

Output :
Character location is : 0

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

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }

        iIndex++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0;
}