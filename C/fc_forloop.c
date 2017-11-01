#include <stdio.h>
//you can use a #define statement to create replacement text
//ex: #define name replacement text
//This avoids magic numbers

main()
{
	int fahr;
	//initialization is done before loop is entered
	//second is test or condition
	//increment step declared
	for (fahr=0; fahr<=300; fahr = fahr + 20){ 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
