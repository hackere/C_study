#include <stdio.h>

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int temp;
	int *p;
	int j = 4;
	p = &a;

	for (int i = 0; i < 4-i; i++)
	{
		temp = p[i];
		p[i] = p[4 - i];
		p[4 - i] = temp;
		
	}

	for (int i = 0; i <= 4; i++)
		printf("%d\t", p[i]);

	return 0;
}