/*

Input  : Marvellous
Output : Reversed string : suollevraM

*/
#include<stdio.h>

void Reverse(char *str)
{
    int iLength = 0, iCnt = 0;
    char temp;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    for(iCnt = 0; iCnt < iLength / 2; iCnt++)
    {
        temp = str[iCnt];
        str[iCnt] = str[iLength - 1 - iCnt];
        str[iLength - 1 - iCnt] = temp;
    }

    printf("Reversed string : %s\n", str);
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}

