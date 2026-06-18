#include <stdio.h>

/*

Input:
  iRow = 4  iCol = 4
Output:
  1 2 3 4
    2 3 4
      3 4
        4

*/

void Pattern(int iRow, int iCol)
{
    int i, j;

    for (i = 1; i <= iRow; i++)
    {
        for (j = i; j <= iCol; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
