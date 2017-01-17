#include <stdio.h>

#define SIZE 5

void copy_array(int *src, int *des);

void main()
{

	int A[SIZE] = { 30, 2, 10, 15, 7 };
	int B[SIZE];

	copy_array(&A, &B);

	for (int j = 0; j <= SIZE-1; j++)
	{
		printf("%d\t", B[j]);
	}

}

void copy_array(int *src, int *des)
{
	for (int i = 0; i <= SIZE-1; i++)
	{
		des[i] = src[i];
	}
}