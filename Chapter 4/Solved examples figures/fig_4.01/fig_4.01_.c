/*
 * fig_4.1_.c
 * counter-controlled Repetiotion
 */

#include <stdio.h>
/*
int main (void)
{
	unsigned int counter;
	counter = 1;

	while (counter <= 10){
		printf ("%u\n", counter);
		++counter;
	}

	return 0;
}*/


//Also can be written as
int main (void)
{
	unsigned int counter;
	counter = 0;

	while (++counter <= 10)
		printf ("%u\n", counter);
}
