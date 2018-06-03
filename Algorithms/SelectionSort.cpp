#include "Global.h"
#include<stdio.h>
#include<time.h>

void selectionSort(int *arr, int n)
{
	system("cls");
	printf("\n--------------------START SELECTION SORT--------------------\n");
	int i, j, key, index;

	clock_t start;
	clock_t end;

	int numberOfExchanges = 0;

	printf("\n\nInput Array :");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	start = clock();

	for (i = 0; i < n; i++)
	{
		key = arr[i];
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < key)
			{
				key = arr[j];
				index = j;
			}
		}

		if (arr[i] != key)
			numberOfExchanges++;

		int temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}

	end = clock();

	printf("\n\nSorted Array : ");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	printf("\n\nNumber of Exchanges : %d", numberOfExchanges);
	printf("\n\nRunning Time : %fs", (float)(end - start) / CLOCKS_PER_SEC);
	printf("\n\n--------------------END SELECTION SORT--------------------\n");
	printf("\n\nEnter any key to return to previous menu : ");
	getchar();
	getchar();
}