
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
	int i = 0;
	for (i = 0; i < iLength; i++)
	{
		if (Arr[i] == 11)
		{
			return TRUE;
		}
	}
	return FALSE;
}

int main()
{
	int iSize = 0, i = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

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

	bRet = Check(p, iSize);
	if (bRet == TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}

	free(p);
	return 0;
}

