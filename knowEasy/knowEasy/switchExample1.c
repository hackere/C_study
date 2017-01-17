#include <stdio.h>
#define LENGHT 100
void aToA(char alphabat[], int size);
void Initinput();

main()
{
	Initinput();
}
void Initinput()
{
	char alphabat[LENGHT] = { NULL };
	printf("input alphabat\n");
	gets(alphabat);
	aToA(alphabat, sizeof(alphabat));
}
void aToA(char alphabat[], int size)
{
	
	for (int i = 0; i <= size-1; i++)
	{
		if (alphabat[i] >= 'a' && alphabat[i] <= 'z')
		{
			alphabat[i] = alphabat[i] - 32;
		}
	}
	printf("%s", alphabat);
}
