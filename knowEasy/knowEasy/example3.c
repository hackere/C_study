#include <stdio.h>

void oddeven(int integer)
{
	int result = 0;
	result = integer % 2;
	if (!(integer % 2))
		printf("input integer is even\n");
	else
		printf("input integer is odd\n");

}

main()
{
	int inputinteger = 0;
	printf("input integer : ");
	scanf("%d", &inputinteger);
	oddeven(inputinteger);

	return 0;
}
