//c = getchar() gets the next input characters from a text stream and returns the value 
//putchar(c) prints the char each time it is called
#include <stdio.c>

main()
{
	int c;
	//c is defined as int because must be big enough to hold any value getchar returns, including EOF
	c = getchar();
	while (c!=EOF) {
		putchar(c);
		c = getchar();
	}
}
