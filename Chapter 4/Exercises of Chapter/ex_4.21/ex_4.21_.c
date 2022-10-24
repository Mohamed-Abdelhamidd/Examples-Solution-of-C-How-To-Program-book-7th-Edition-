// fig. 4.2:
// counter-controlled repetition with the for statement

#include <stdio.h>

int main (void)
{
	unsigned int counter = 1;	//define counter

	//initialization, repetition condition, increment
	// all are included in for statement header
	for (  ; counter <= 10; ++counter){	 //there is no definition as we defined some where else
		printf ("%u\n", counter);
	}//end of for

	return 0;
}// end of main
