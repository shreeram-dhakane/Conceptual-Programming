/*

Input:
No input required

Output:
Symbol  Decimal  Hexadecimal  Octal
A       65       0X41         101
B       66       0X42         102
...
Displays ASCII table from 0 to 255.

*/
#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t0X%X\t\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}

