#include <stdio.h>
#include <string.h>

int myStrlen(char *str);

int main()
{
	char name[100];
	char *p;
	int lenght;
	p = &name;

	scanf("%s", &name);

	lenght = myStrlen(p);

	printf("%d\n", lenght);
	printf("%d\n", strlen(name));

	return 0;
}

int myStrlen(char *str)
{
	int lenght = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] != '\0')
			lenght++;
		else if (str[i] == '\0')
			break;
	}
	return lenght;
}