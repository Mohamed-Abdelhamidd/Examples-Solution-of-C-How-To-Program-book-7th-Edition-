//ex4.13: calculating the factorial of 5

#include <stdio.h>

int main (void){

	unsigned int counter;
	unsigned int product;

	product = 1;	//initialize product

	for (counter = 1; counter <= 20; ++counter){
		product = product * counter;	//factorial calculation
	}

	printf ("the !20 = %u", product);	//conversion specifier

}//end main

//the difficult might meet us at factorial 20 is
//that the range of the type integer can carry as
//it is 4 bytes so we will write it unsigned int to
//double the range and conversion specifier
//should be %u not %d as we defined it with unsigned int
//double of the range
