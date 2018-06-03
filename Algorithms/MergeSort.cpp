#include "Global.h"

void merge(int *arr, int low, int mid, int high)
{
	if (high - low < 1)
		return;
	int l = mid - low + 1;
	int r = high - mid;

	int *L = (int*)malloc(sizeof(int)*(l+1));
	int *R = (int*)malloc(sizeof(int)*(r+1));

	int i, j, k;

	for (i = 0; i < l; i++)
		L[i] = arr[low+i];

	for (i = 0; i < r; i++)
		R[i] = arr[mid+i+1];

	L[l] = INT_MAX;
	R[r] = INT_MAX;

	i = 0;
	j = 0;

	for (k = low; k <= high; k++)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
	}

	free(L);
	free(R);

	return;
}

void mergeSortWrapper(int *arr, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		mergeSortWrapper(arr, 0, mid);
		mergeSortWrapper(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

void mergeSort(int *arr, int n)
{
	system("cls");
	printf("\n--------------------START MERGE SORT--------------------\n");

	clock_t start;
	clock_t end;

	printf("\n\nInput Array :");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	start = clock();

	mergeSortWrapper(arr, 0, n-1);

	end = clock();

	printf("\n\nSorted Array : ");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	printf("\n\nRunning Time : %fs", (float)(end - start) / CLOCKS_PER_SEC);
	printf("\n\n--------------------END MERGE SORT--------------------\n");
	printf("\n\nEnter any key to return to previous menu : ");
	getchar();
	getchar();
}