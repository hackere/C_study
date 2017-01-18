#include <stdio.h>
#include <string.h>
#define STUDENTCOUNT 5
typedef struct student {
	char name[10];
	int studnetnumber;
	int kor;
	int eng;
	double avg;
}STU;
int main()
{
	STU stunumber[STUDENTCOUNT];
	double totalavg=0;
	double min=0, max=0;
	for (int i = 0; i < 5; i++)
	{
		printf("input information student\n");
		scanf("%s %d %d %d", &stunumber[i].name, &stunumber[i].studnetnumber, &stunumber[i].kor, &stunumber[i].eng);

		stunumber[i].avg = stunumber[i].kor + stunumber[i].eng / 2;
	}

	for (int j = 0; j < 5; j++)
	{
		printf("number %d\n", stunumber[j].studnetnumber);
		printf("avg grade%lf\n", stunumber[j].avg);
	}

	for (int x = 1; x < 5; x++)
	{
		if (stunumber[0].avg < stunumber[x].avg)
		{
			max = stunumber[x].avg;
		}
		else if (stunumber[0].avg > stunumber[x].avg)
		{
			min = stunumber[x].avg;
		}
	}

	printf("high avg student -> %lf\n", max);
	printf("lower avg student -> %lf\n", min);

	for (int i = 0; i < 5; i++)
	{
		totalavg += stunumber[i].avg;
	}
	totalavg = totalavg / STUDENTCOUNT;
	printf("%lf", totalavg);

	return 0;
}