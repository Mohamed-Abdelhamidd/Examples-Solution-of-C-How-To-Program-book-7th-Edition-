//fig5.13: using the srand and seed function for randomizing the rand function

#include <stdio.h>
#include <stdlib.h>	//the function of rand and randomizing for rand is srand function which takes seed
#include <time.h>	//the time function prototype is at the library of time

int main (void)
{
	unsigned int i;
	/*unsigned int seed;	//seed variable takes unsigned value for srand function to make different sequene each time

	printf ("%s","Enter a seed number:");
	scanf ("%u", &seed);	//get seed number each time

	srand (seed);	//function srand using unsigned int value seed
	*/


	srand ( time ( NULL ) );	//srand using the time function which read the clock of computer each time automatically and give new values of time and like that srand get new sequences each time it get reading from time function

	for (i = 1; i <= 10; ++i){	//roll ten times

		printf ("%d\t", 1+ rand()%6);	//scaling and shifting

		if (i%5 == 0){	//new line each 5 values
			puts ("");
		}//end of if
	}//end of for
}//end of main
