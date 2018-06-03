#include "Global.h"

void insertionSort(int *arr, int n)
{
	system("cls");
	printf("\n--------------------START INSERTION SORT--------------------\n");
	int i, j, key;

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
		j = i - 1;
		key = arr[i];

		while (j >= 0 && key<arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
			numberOfExchanges++;
		}
		arr[j + 1] = key;
	}

	end = clock();

	printf("\n\nSorted Array : ");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	printf("\n\nNumber of Exchanges : %d", numberOfExchanges);
	printf("\n\nRunning Time : %fs", (float)(end - start) / CLOCKS_PER_SEC);
	printf("\n\n--------------------END INSERTION SORT--------------------\n");
	printf("\n\nEnter any key to return to previous menu : ");
	getchar();
	getchar();
}