/*순열 어떤 수의 순열은 그수보다 작으며 1보다 큰 정수들을 모두 그 수와 곱함으로써 얻어짐.
4의 순열 4*3*2


#include <stdio.h>

int fact(int number);


int main()
{
	int number = 0;

	scanf("%d", &number);

	printf("%d", fact(number));
	return 0;
}

int fact(int number)
{
	int i = number;
	int result = 1;
	for (i = number; i > 0; i--)
	{
		result *= i;
	}
	return result;
}
*/
//재귀 factorial

#include <stdio.h>

int fact(int number);
int main()
{
	int number = 0;

	scanf("%d", &number);

	printf("%d", fact(number));

	return 0;
}

int fact(int number)
{
	if (number == 1)
	{
		return 1;
	}
	return number * fact(number - 1);
}
