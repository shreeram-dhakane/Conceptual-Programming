/*

Input :
Marvellous Multi OS

Output :
Modified string is mARVELLOUS mULTI os

*/
#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;   // Convert uppercase to lowercase
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;   // Convert lowercase to uppercase
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}

