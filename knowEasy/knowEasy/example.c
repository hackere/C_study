#include <stdio.h>
#include <conio.h>

#define ENTER 13

void main()
{
	int word;

	do {
		word = getch();
		printf("%d\n", word);
	} while (word != ENTER);


}