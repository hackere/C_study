#include <stdio.h>
#include <string.h>

#define LIMIT 100

int findChar(char *str, char ch);

int main()
{
	char word[LIMIT];
	char *p;
	p = &word;

	scanf_s("%s", &word, sizeof(word));
	
	printf("%d", findChar(word, 'o'));

	return 0;
}

int findChar(char *str, char ch)
{
	for (int i = 0; i < LIMIT; i++)
	{
		if (str[i]== ch)
			return i;
	}
	return -1;
}