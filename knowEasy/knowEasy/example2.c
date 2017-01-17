#include<stdio.h>

int main()
{
	char *one = "one";
	char *two = "two";
	char *three = "three";

	printf("%d %d %d\n", &one, &two, &three);
	printf("%s %s %s\n", one, three, two);
	printf("%s %s %s\n", two, one, three);
	printf("%s %s %s\n", two, three, one);
	printf("%s %s %s\n", three, two, one);
	printf("%s %s %s\n", three, one, two);

	return 0;
}