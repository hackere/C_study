#include <stdio.h>
#include <string.h>

int deleteChar(char *str, char ch);

int main()
{
	char str[100];
	char ch;
	char *p;

	p = &str;

	printf("input word \n");
	scanf_s("%99s", &str, sizeof(str));
	printf("input delete word\n");
	scanf_s(" %c", &ch, sizeof(ch));

	printf("%d\n", deleteChar(p, ch));

	printf("%s", p);

	return 0;
}
int deleteChar(char *str, char ch)
{
	int i = 0;
	int j = 0;

	for (i; i < 100; i++)
	{
		if (str[i] == ch) //제거문자탐색, 공백부분 매꾸기
		{
			str[i] = ' ';
			for (j=i+1; j < 100; j++)
			{
				str[i] = str[j];
				i++;
			}
			return 0;
		}
	}
	return -1;
}