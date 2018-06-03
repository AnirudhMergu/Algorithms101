#include "Global.h"

void linearSearch(int *arr, int n, int key)
{
	system("cls");
	printf("\n--------------------START LINEAR SEARCH--------------------\n");
	int i, j, flag, index = -1;

	clock_t start;
	clock_t end;

	printf("\n\nInput Array :");

	for (int i = 0; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	start = clock();

	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			flag = 1;
			index = i;
		}
	}

	end = clock();

	if (flag)
		printf("\n\n%d found at index %d [Zero Indexed].", key, index);
	else
		printf("\n\n%d not found in the array.", key);

	printf("\n\nRunning Time : %fs", (float)(end - start) / CLOCKS_PER_SEC);
	printf("\n\n---------------------END LINEAR SEARCH---------------------\n");
	printf("\n\nEnter any key to return to previous menu : ");
	getchar();
	getchar();
}