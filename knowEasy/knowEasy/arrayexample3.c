#include <stdio.h>
#include <string.h>

int main()
{
	int number[10] = { 5,4,3,2,1,6,7,8,9,10 };
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (number[i] < number[j])
			{
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	for (int j = 0; j < 10; j++)
		printf("%d\t", number[j]);

	return 0;
}