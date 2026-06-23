/*

Input  : C
Output : Your exam at 9.20 AM

Input  : d
Output : Your exam at 10.30 AM

*/
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7.00 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}

