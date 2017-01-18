#include <stdio.h>
#include <string.h>

int main()
{
	int number1, number2;
	char ch[12];

	do
	{
		printf("input command\n");
		scanf("%s", &ch);
		printf("input number\n");
		scanf("%d %d", &number1, &number2);
		ch[strlen(ch)] = '\0';

		if (strcmp(ch, "add") == 0)
			printf("%d\n", number1 + number2);
	
		else if (strcmp(ch, "substract") == 0)
			printf("%d\n", number1 - number2);

		else if (strcmp(ch, "multiply") == 0)
			printf("%d\n", number1 * number2);

		else if (strcmp(ch, "divide") == 0)
			printf("%d\n", number1 / number2);
		else if (strcmp(ch, "quit") == 0)
			break;
	} while (0!=number1);
		
	return 0;
}
