/*

Input :
marve89llous121

Output :
Digits in string are : 89121

--------------------------------

Input :
Demo

Output :
Digits in string are :

*/
#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    printf("Digits in string are : ");
    DisplayDigit(arr);

    return 0;
}

