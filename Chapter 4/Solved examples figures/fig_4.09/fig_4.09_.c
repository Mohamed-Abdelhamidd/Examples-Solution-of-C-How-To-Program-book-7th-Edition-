// fig 4.09: using the do...while repetition statement

#include <stdio.h>

// function main begins program execution
int main (void)
{
	unsigned int counter = 1;	//initialize counter

	do {
		printf ("%u  ", counter);	//display counter
	} while (++counter <= 10);		// end do...while
} //end main function

