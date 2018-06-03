#include "Global.h"

int main()
{
	int ch;
	while (true)
	{
		system("cls");
		printf("\nMAIN MENU\n");
		printf("\n1. Getting Started - Insertion sort and Merge sort\n0. Exit\n\nEnter your choice : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 0:
			printf("\nExiting...\n");
			return 0;
			break;
		case 1:
			gettingStarted();
		default:
			break;
		}
	}
	return 0;
}