/*

Input : 
"Marvellous Multi OS"

Output :
"arvellous multi"

*/

#include <stdio.h>

void StrCpySmall(char *src, char *dst)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];   // Empty string

    StrCpySmall(arr, brr);

    printf("%s", brr);   // arvellous multi

    return 0;
}