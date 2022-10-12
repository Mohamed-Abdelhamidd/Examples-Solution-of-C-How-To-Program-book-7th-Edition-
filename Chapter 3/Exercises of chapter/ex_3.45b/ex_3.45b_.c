// ex3.45b: find the constant e value

#include <stdio.h>

int main (void) {

	double e = 1;	//initialize e by 1 to avoid 1+ calculating ---> e = 1 + 1/1! + 1/2!+ .....
	float factorial = 1;	//factorial variable storage
	unsigned int counter = 1;	//counter of the big while
	unsigned int factorialCounter = 1;	//factorial counter to count for factorial

	while (counter <= 10){	//number of e parts till .... + 1/!10

		while (factorialCounter <= counter){	//if factorial counter less than the number of factorial
			factorial = factorial * factorialCounter;	// multipl factorial for the number
			++factorialCounter;	//increment for factorial counter
		}

		e = e + (1 / factorial);	//calculation for the e parts e = 1 + 1/!1 + 1/!2 + ..... + 1/!10 (counter responsible on that)

		factorialCounter  = 1;	//reset the factorial counter to 1 to begin for each factorial
		factorial = 1;		//reset the multiplication of the factorial result to 1
		++counter;		//increment the big counter
	}

	printf ("e = %f\n", e);	//print the result of e approximately e = 2.718282

	return 0;
}
