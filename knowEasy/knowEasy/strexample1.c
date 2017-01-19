#include <stdio.h>
#include <string.h>

int main()
{
	char word[100] = "It is useful Where a statement Is needed sYntactically, but no action is reQUired";
	char* p;
	int i = 0; 
	int j = 0;
	p = &word;

	for (i=0, j =0; i < strlen(word); i++)
	{
		if (p[i] == ' ')
			continue;
		p[j] = p[i];
		j++;
	}
	
	p[j] = '\0';
	printf("%s", word);

	return 0;
}