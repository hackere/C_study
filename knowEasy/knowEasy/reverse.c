#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main()
{
	char string[100];
	char *p;

	p = &string;

	scanf("%s", &string);
	
	reverse(p);

	printf("%\s", string);
}

void reverse(char *str)
{
	int j = strlen(str)-1;
	char temp;
	for (int i = 0; i < j-i; i++)
	{
		temp = str[i];
		str[i] = str[j - i];
		str[j - i] = temp;
	}
}
//reverse