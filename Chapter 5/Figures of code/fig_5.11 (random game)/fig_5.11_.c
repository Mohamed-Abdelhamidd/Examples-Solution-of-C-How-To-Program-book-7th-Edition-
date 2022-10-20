// fig_5.11: shifted, scaling, random integers

#include <stdio.h>	//contains input and output functions prototypes
#include <stdlib.h>	//contains rand () variable prototypes and various of data types and constants used by the function

int main (void){
	unsigned int i;	//control variable

	for (i = 1; i <= 20; ++i){	//20 rolls

		printf ("%10d", rand()%6 + 1);	//rand() function gives a random integer depending on the compiler and by dividing to remainder operator we get 0 to 5 range and by adding 1 we get from 1 to 6, scaling and addition they are called respectively

		if (i % 5 == 0){	//new line each 5 numbers (right justified)
			puts("");
		}//end if
	}//end for
}//end main
