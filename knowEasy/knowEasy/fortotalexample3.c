#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int operinput()
{
	srand(time(NULL));

	int ascii = 0;
	ascii = rand() % 3 + '*';
	if (ascii == 44)
		ascii = 45;

	return ascii;
}

int correctanswer(int inte1, int inte2, int oper)
{
	int result = 0;
	if (oper == 42)
	{
		return inte1 * inte2;
	}
	
	else if (oper == 43)
	{
		return inte1 + inte2;
	}

	else if (oper == 45)
	{
		return inte1 - inte2;
	}
}

main()
{
	int integer[10];
	int oper[10];
	int integer2[10];
	int answer = 0;
	int result = 0;
	int count = 0;
	int countc = 0;
	srand(time(NULL));
	for (int i = 0; i <= 9; i++)
	{
		integer[i] = rand() % 10, oper[i] = operinput(), integer2[i] = rand() % 10;
		result = correctanswer(integer[i], integer2[i], oper[i]);
		printf("\n%d %c %d = ", integer[i], oper[i], integer2[i]);
		scanf("%d", &answer);

		if (result == answer)
			count++;
		else
			countc++;
	}
	printf("correct answer counted = %d\n", count);
	printf("miss = %d\n", countc);
}
