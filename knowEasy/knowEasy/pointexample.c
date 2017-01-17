#include <stdio.h>

void getsum_diff(int *pa, int *pb);

int main()
{
	int number1, number2;
	int *pa, *pb;
	scanf("%d %d", &number1, &number2);

	pa = &number1;
	pb = &number2;

	getsum_diff(pa, pb);
	
	return 0;
}

void getsum_diff(int *pa, int *pb)
{
	printf("%d\n", *pa + *pb);
	printf("%d\n", *pa - *pb);
}