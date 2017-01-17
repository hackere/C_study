#include <stdio.h>

int o_to_c(int ounce);

main()
{
	int ounce = 0;
	printf("This program is change ounce to cup.\n");

	printf("how much change ounce to cup\n");
	scanf("%d", &ounce);
	
	printf("change %d ounce to %d cup\n", ounce, o_to_c(ounce));
}

int o_to_c(int ounce)
{
	int o_To_c = 0;

	o_To_c = ounce / 8;

	return o_To_c;
}