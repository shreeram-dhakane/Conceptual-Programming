#include<stdio.h>

int KMtoMeter(int iNo)
{
    int meter = 0;

    meter = iNo * 1000;

    return meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d",iRet);

    return 0;
}