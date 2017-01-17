#include <stdio.h>

int main()
{
	int count[100][10];
	int *p;

	count[44][8] = 99;
	printf("%d\n", count[44][8]);

	p = &count[44];

	*(p+8) = 110;
	printf("%d\n", count[44][8]);

	return 0;
}