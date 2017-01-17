#include <stdio.h>

double calcweight(double weight);

int main()
{
	double inputweight=0;
	double resultweight=0;
	printf("this progam is your weight calc that add moon gravity\n");
	printf("how weight are you?\n");
	scanf("%lf", &inputweight);

	printf("%lf", calcweight(inputweight));
	
}
double calcweight(double weight)
{
	weight = weight - (0.17 * weight);
	return weight;
}