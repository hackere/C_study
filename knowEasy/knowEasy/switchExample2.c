#include <stdio.h>

int init();
void sort(int r);
main()
{
	int r = 0;
	r = init();
	sort(r);
}
int init()
{
	int s = 0;
	scanf("%d", &s);
	return s;
}
void sort(int r)
{
	if (r < 0 || r > 0)
	{
		if (r < 0)
			printf("number is negative");
		else
			printf("number is pasitive");
		}
	else
		printf("number is zero");