/*

Input  : Marvellous
Output : Difference : 8

*/
#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("Difference : %d\n", iRet);

    return 0;
}

