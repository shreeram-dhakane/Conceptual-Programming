/*

Input  : marvellous
Output : Contains Vowel

Input  : Demo
Output : Contains Vowel

Input  : xyz
Output : There is no Vowel

*/
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') ||
           (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[50];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}

