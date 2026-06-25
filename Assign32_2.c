/*

    Input : "Marvellous Multi OS"
    Output : MARVELLOUS MULTI OS
    
*/

#include <stdio.h>

void struprx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
