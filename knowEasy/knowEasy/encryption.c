#include <stdio.h>
#include <string.h>
#define KEY 3

void myEnc(char *str);
void myDec(char *str);

int main()
{
	char plaintxt[100];
	char *p;

	p = &plaintxt;

	scanf_s(" %s", &plaintxt, sizeof(plaintxt));
	
	myEnc(p);
	printf("%s\n", plaintxt);
	
	myDec(p);
	printf("%s\n", plaintxt);

	return 0;
}

void myEnc(char *str)
{
	int i;
	for (i = 0; i < strlen(str)-1; i++)
	{
		str[i] += KEY;
	}
}

void myDec(char *str)
{
	int i;
	for (i = 0; i < strlen(str)-1; i++)
	{
		str[i] += -KEY;
	}
}