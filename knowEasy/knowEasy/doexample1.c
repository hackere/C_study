#include <stdio.h>
#include <stdlib.h>

#define LITER 3.7854


main()
{
	double inputgallon = 0;

	do {
		printf("how change Gallon to Liter?\n");
		scanf("%lf", &inputgallon);
		printf("%lf gallon change to liter : %lf\n", inputgallon, inputgallon * LITER);
	} while (0!=inputgallon);

	return 0;
	
}