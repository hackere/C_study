#include <stdio.h>
#include <stdlib.h>

main()
{
	int ch = 0;
	do {
		printf("1. Enter address\n");
		printf("2. Delete address\n");
		printf("3. Search the list\n");
		printf("4. print the list\n");
		printf("5. Quit\n");
		printf("Enter the number of you choice(1-5_)\n");
		scanf("%d", &ch);
		printf("\n");
		switch (ch)
		{
		case 1:
			printf("Enter address\n");
			break;
		case 2:
			printf("Delete address\n");
			break;
		case 3:
			printf("Search the list\n");
			break;
		case 4:
			printf("print the list\n");
			break;
		case 5:
			break;
		default:
			break;
		}
	} while (ch != 5);
	
}


