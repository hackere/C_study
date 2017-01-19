//using struct pointer 

#include <stdio.h>
#include <string.h>

void readData(struct INFO *ptr);
void calAverage(struct INFO *ptr);
void printData(struct INFO *ptr);

typedef struct mystr {
	char name[100];
	int number;
	int korea;
	int english;
	double avg;
}INFO;

int main()
{
	INFO data[3];
	INFO *p;

	p = &data;

	readData(p);
	calAverage(p);
	printData(p);
}
void readData(INFO *ptr)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d student input name\n", i + 1);
		scanf("%s", &ptr[i].name);
		printf("%d student input number\n", i + 1);
		scanf("%d", &ptr[i].number);
		printf("%d student input kor grade\n", i + 1);
		scanf("%d", &ptr[i].korea);
		printf("%d student input eng grade\n", i + 1);
		scanf("%d", &ptr[i].english);
	}
	
}
void printData(INFO *ptr)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d student name is %s\n", i + 1, ptr[i].name);
		printf("%d student number is %d\n", i + 1, ptr[i].number);
		printf("%d student kor grade is %d\n", i + 1, ptr[i].korea);
		printf("%d student eng grade is %d\n", i + 1, ptr[i].english);
		printf("%d student avg grade is %lf\n", i + 1, ptr[i].avg);
	}
}
void calAverage(INFO *ptr)
{
	for (int i = 0; i < 3; i++)
	{
		ptr[i].avg = (ptr[i].korea + ptr[i].english) / 2;
	}
}