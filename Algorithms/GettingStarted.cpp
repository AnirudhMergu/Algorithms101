#include "Global.h"

void gettingStarted()
{
	while(true)
	{
		system("cls");
		int ch;
		entry:
		printf("\nGetting Started\n\n1. Insertion Sort\n2. Selection Sort\n3. Merge Sort\n4. Linear Search\n0. Previous Menu\n\nEnter your choice : ");
		scanf("%d", &ch);

		if (!ch)
		{
			printf("\nReturning to Main Menu...\n");
			return;
		}

		int i, n;
		printf("Enter number of elements : ");
		scanf("%d", &n);

		printf("Enter the elements separated by a ' ' : ");

		int *arr = (int*)malloc(sizeof(int)*n);

		for (i = 0; i < n; i++)
		{
			scanf("%d", arr + i);
		}

		switch (ch)
		{
		case 1:
			insertionSort(arr, n);
			break;
		case 2:
			selectionSort(arr, n);
			break;
		case 3:
			mergeSort(arr, n);
			break;
		case 4:
			int key;
			printf("\nEnter the element to search for : ");
			scanf("%d", &key);
			linearSearch(arr, n, key);
			break;
		case 5:
			printf("\n\nNot yet implemented :(\n");
			printf("Want to choose other option (1 for Yes and 0 for No) : ");
			scanf("%d", &ch);
			if (ch)
				goto entry;
			else
				return;
			break;
		default:
			break;
		}

		free(arr);
	}
}