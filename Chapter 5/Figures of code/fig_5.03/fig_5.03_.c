//fig_5.03: creating and using a programmer-defined function

#include <stdio.h>

int square (int y);	//function prototype

int main (void){

	int counter;

	for (counter = 1; counter <= 10; ++counter){
		printf ("%d\t", square(counter));	//function caller
	}

	puts ("");
}

int square (int y){	//function definition

	return y * y;	//return the value of  square to the calling function
}
