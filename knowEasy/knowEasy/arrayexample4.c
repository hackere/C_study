#include <stdio.h>
#define NUMBERSIZE 10

int main()
{
	int number[NUMBERSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int min = number[0];
	int max = number[0];

	for (int i = 1; i < NUMBERSIZE; i++)
	{
		if (number[0] < number[i])
			max = number[i];
		else if (number[0] > number[i])
			min = number[i];
		
	}
	printf("min = %d max = %d", min, max);

	return 0;
}