#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

/*define statements are symbolic constants. they cannot be changed*/
/*print Fahrenheit-Celsius table for fahr = 0, 20, ...300*/

main()
{
	float fahr, cels;

	cels = LOWER;
	printf("F\tC\t\n");
	while(cels<=UPPER) {
		fahr = cels * 1.8 + 32;
		printf("%3.2f\t%6.0f\n", fahr, cels);
		cels = cels + STEP;
	}
}

