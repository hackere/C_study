//swap

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char c[10] = { 0 };
	char *p;
	char temp;
	int j;

	p = &c;
	
	printf("input word\n");
	scanf("%s", &c);
	
	j = strlen(c)-1;
	for (int i = 0 ; i <j-i; i++)
	{
		
		temp = p[i];  // this - > siht 
		p[i] = p[j - i];
		p[j - i] = temp;
	}
	printf("%s", c);

	return 0;
}