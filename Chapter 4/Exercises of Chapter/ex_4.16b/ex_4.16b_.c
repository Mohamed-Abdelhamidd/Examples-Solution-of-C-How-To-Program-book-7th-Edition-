//making patterns for the triangles shapes

#include <stdio.h>

int main (void){

	unsigned int column;
	unsigned int row;
	unsigned int increment;

	increment = 10;

	for (column = 1; column <= 10; ++column){

		for (row = 1; row <= increment; ++row){
			printf("%s","*");
		}

		puts("");
		--increment;
	}
}
