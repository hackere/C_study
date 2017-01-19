#include <stdio.h.>

void sum(int *number1, int *number2, int *result);

int main()
{
	int number1 = 20;
	int number2 = 20;
	int number3 = 30;

	sum(&number1, &number2, &number3);

	return 0;
}

void sum(int *number1, int *number2, int *result)
{
	*result = *number1 + *number2;

	printf("%d", *result);
}
