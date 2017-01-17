#include <stdio.h>

#define LINELIMIT 5
#define MAX 20
main()
{
	int i = 0;
	int j = 1;
	int x = 1;
	for (x; x <= MAX; x++)
	{
		for (i; i <= LINELIMIT-1; i++)
		{
			printf("%d\t", j);
			j++;
		}
		printf("\n");
		i = 0;
	}
}