// ex_4.16d_.c

#include <stdio.h>

int main (void){
	unsigned int increment;
	unsigned int decrement;
	unsigned int column;
	unsigned int row;
	unsigned int space;

	increment = 1;
	decrement = 9;

	for (column = 1; column <= 10; ++column){

		for (space = 1; space <= decrement; ++space){
			printf (" ");
		}
		for (row = 1; row <= increment; ++row){
			printf ("*");
		}

		puts ("");
		++increment;
		--decrement;
	}
}



