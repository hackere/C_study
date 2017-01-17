#include <stdio.h>

int main()
{
	char str[80];
	int i, spaces;
	char *p;
	printf("Enter a string: ");
	gets(str);

	p = &str;

	spaces = 0;

	for (i = 0; p[i]; i++)
		if (p[i] == ' ') 
			spaces++;

	printf("Number of spaces : %d", spaces);
}
