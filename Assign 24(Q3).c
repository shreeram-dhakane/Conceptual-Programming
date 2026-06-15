/*

Input : iRow = 3 iCol = 5
Output :
A B C
A B C
A B C
A B C
A B C

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i,j;

    for(i=1;i<=iCol;i++)
    {
        for(j=0;j<iRow;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}