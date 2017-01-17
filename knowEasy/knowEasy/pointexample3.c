#include <stdio.h>
#define SIZE 5

void sum_money(const int *src, const int *bonus, int *des);

void main()
{
	int A[SIZE] = { 100,200,500,350,260 };
	int B[SIZE] = { 50, 60, 40, 30, 10 };
	int C[SIZE];

	sum_money(&A, &B, &C);

	for (int i = 0; i <= SIZE - 1; i++)
	{
		printf("%d\t", C[i]);
	}
	
}

void sum_money(const int *src, const int *bonus, int *des)
{
	for (int i = 0; i <= SIZE - 1; i++)
	{
		des[i] = src[i] + bonus[i];
	}
}