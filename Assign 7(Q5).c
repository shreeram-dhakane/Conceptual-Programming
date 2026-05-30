#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int EvenFact = 1;
    int OddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            EvenFact = EvenFact * i;
        }
        else
        {
            OddFact = OddFact * i;
        }
    }

    return EvenFact - OddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}