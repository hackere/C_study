#include <stdio.h>
#include <string.h>


int main()
{
	int grade[10];
	double avg=0;

	printf("점수 입력\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &grade[i]);
		if (grade[i] > 100 || grade[i] < 0)
			break;
		avg += grade[i];
	}
	avg = avg / 10;
	printf("%lf", avg);
	
	return 0;
}