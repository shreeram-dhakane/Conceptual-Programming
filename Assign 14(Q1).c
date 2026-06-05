#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int i = 0;
	int iCnt = 0;
	for (i = 0; i < iLength; i++)
	{
		if ((Arr[i] % 2) == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iSize = 0, iRet = 0, i = 0;
	int *p = NULL;

	printf("Enter number of elements: ");
	if (scanf("%d", &iSize) != 1 || iSize <= 0)
	{
		printf("Invalid size\n");
		return 1;
	}

	p = (int *)malloc(iSize * sizeof(int));
	if (p == NULL)
	{
		printf("Unable to allocate memory\n");
		return 1;
	}

	printf("Enter %d elements:\n", iSize);
	for (i = 0; i < iSize; i++)
	{
		if (scanf("%d", &p[i]) != 1)
		{
			printf("Invalid input\n");
			free(p);
			return 1;
		}
	}

	iRet = CountEven(p, iSize);
	printf("Result is %d\n", iRet);

	free(p);
	return 0;
}

