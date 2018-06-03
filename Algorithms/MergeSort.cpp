#include "Global.h"
#include<stdio.h>
#include<time.h>

void merge(int *arr, int low, int mid, int high)
{
	int l = mid - low + 1;
	int r = high - mid;

	int *L = (int*)malloc(sizeof(int)*l);
	int *R = (int*)malloc(sizeof(int)*r);

	int i, j, k;

	for (i = 0; i <= mid; i++)
		L[i] = arr[i];

	for (i = mid+1; i < high; i++)
		R[mid+1-i] = arr[i];

	i = 1;
	j = 1;

	for (k = 0; k < high; k++)
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

	return;
}

void mergeSortWrapper(int *arr, int low, int high)
{

}

void mergeSort(int *arr, int n)
{
	system("cls");
	printf("\n--------------------START MERGE SORT--------------------\n");
	int i, j, key, index;

	clock_t start;
	clock_t end;

	printf("\n\nInput Array :");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	start = clock();

	mergeSortWrapper(arr, 0, n);

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