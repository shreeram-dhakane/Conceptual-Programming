/*

Input :
Marvellous

Output :
Number of white spaces are : 0

--------------------------------

Input :
Marvellous Infosystems

Output :
Number of white spaces are : 1

--------------------------------

Input :
Marvellous Infosystems by Piyush Manohar Khairnar

Output :
Number of white spaces are : 4

*/
#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n", iRet);

    return 0;
}

