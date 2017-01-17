#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

int sortanswer(int correctanswer, int inputanswer);

main()
{
	int correctanswer = 0;
	srand(time(NULL));
	correctanswer = (rand() % 100) + 1;
	int answer = 0;

	for(int count = 1; count <= COUNT; count++)
	{ 
		printf("input answer, %d try\n", count);
		scanf("%d", &answer);

		if (sortanswer(correctanswer, answer) == 0)
		{
			printf("congratulation you %d try\n", count);
			break;
		}
	}
		
}
int sortanswer(int correctanswer,int inputanswer)
{
	if (correctanswer == inputanswer)
	{
		printf("RIGHT!\n");
		return 0;
	}
	else if (correctanswer > inputanswer)
	{
		printf("UP\n");
		return 1;
	}
	else
	{
		printf("DOWN\n");
		return 2;
	}
}