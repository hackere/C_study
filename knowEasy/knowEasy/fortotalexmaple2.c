#include <stdio.h>

double areacalc(double height, double widht);


int main()
{
	int Rooms = 0;
	double height, widht;
	double area = 0.0;
	printf("input rooms\n");
	scanf("%d", &Rooms);
	for (int i = 0; i <= Rooms-1; i++)
	{
		printf("input %d room = height, widht : ", i+1);
		scanf("%lf %lf", &height, &widht);
		area = area + areacalc(height, widht);
	}

	printf("your house total area : %lf\n", area);
}

double areacalc(double height, double widht)
{
	return height * widht;
}