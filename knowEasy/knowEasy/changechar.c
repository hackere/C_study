#include <stdio.h>
#include <string.h>

int changeChar(char *str, int i, char ch);

int main()
{
	char string[100];
	int changeindex;
	char ch;
	char *p;

	p = &string;
	printf("input string : \n");
	scanf_s("%99s", &string, sizeof(string));

	printf("input change string : \n");
	scanf_s(" %c", &ch, sizeof(ch));

	printf("input change\n");
	scanf_s("%d", &changeindex, sizeof(changeindex));

	printf("%d\n", changeChar(p, changeindex, ch));

	printf("%s", string);
	return 0;
}
int changeChar(char *str, int i, char ch)
{
	if (strlen(str) <= i)
		return -1;
	else if (strlen(str) > i)
	{
		str[i] = ch;
		if (str[i] == ch)
			return 0;
	}
	return 1;
}