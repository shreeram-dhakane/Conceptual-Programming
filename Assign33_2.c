/*
    Input : "Marvellous Multi OS"
    M

    Output : Character frequency is 2

    Input : "Marvellous Multi OS"
    W
    
    Output : Character frequency is 0

*/
#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^"]s", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}
