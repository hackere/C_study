/*���� � ���� ������ �׼����� ������ 1���� ū �������� ��� �� ���� �������ν� �����.
4�� ���� 4*3*2


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
//��� factorial

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
