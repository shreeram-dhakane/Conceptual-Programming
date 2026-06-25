/*

Input :
"Marvelous Multi OS"

Output :
Copied String : "Marvelous Multi OS"       in another string

*/

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("Input : ");
    scanf("%[^\n]", arr);

    StrCpyX(arr, brr);

    printf("Output : %s\n", brr);

    return 0;
}