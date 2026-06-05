
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
	int i = 0;
	printf("Elements which are even and divisible by 5:\n");
	for (i = 0; i < iLength; i++)
	{
		if ((Arr[i] % 2 == 0) && (Arr[i] % 5 == 0))
		{
			printf("%d\t", Arr[i]);
		}
	}
	printf("\n");
}

int main()
{
	int iSize = 0, i = 0;
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

	Display(p, iSize);

	free(p);
	return 0;
}

