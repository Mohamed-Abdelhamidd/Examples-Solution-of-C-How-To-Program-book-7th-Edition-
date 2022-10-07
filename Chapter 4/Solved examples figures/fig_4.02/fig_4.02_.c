// fig. 4.2:
// counter-controlled repetition with the for statement

#include <stdio.h>

int main (void)
{
	unsigned int counter;	//define counter

	//initialization, repetition condition, increment
	// all are included in for statement header
	for (counter = 1; counter <= 10; ++counter){
		printf ("%u\n", counter);
	}//end of for

	return 0;
}// end of main


