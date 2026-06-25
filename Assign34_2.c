/*

Input :
"Marvellous Multi OS"
10

Output :
"Marvellous

*/

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while (*src != '\0' && iCnt > 0)
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int iCnt;

    printf("Input :\n");
    scanf("%[^\n]", arr);
    getchar();

    printf("Enter number of characters to copy :\n");
    scanf("%d", &iCnt);

    StrNCpyX(arr, brr, iCnt);

    printf("Output : %s\n", brr);
    return 0;
}
