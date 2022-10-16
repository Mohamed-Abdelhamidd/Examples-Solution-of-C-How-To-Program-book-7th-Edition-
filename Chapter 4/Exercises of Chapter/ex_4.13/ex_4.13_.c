//ex4.13: calculating the product of odd numbers

#include <stdio.h>

int main (void){

	int counter;
	int product;

	product = 1;	//initialize product

	for (counter = 1; counter <= 15; counter += 2){
		product = product * counter;
	}

	printf ("the product of odd numbers from 1 to 15 is: %d", product);
}
