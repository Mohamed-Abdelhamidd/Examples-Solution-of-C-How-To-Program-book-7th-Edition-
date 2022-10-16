// ex4.12: calculating sum of even numbers

#include <stdio.h>

int main (void){

	unsigned int counter;	//variable counter
	unsigned int sum;	//sum variable

	sum = 0;	//initialize to zero

	for (counter = 2; counter <= 30; counter += 2){
		sum += counter;	//sum the numbers
	} //end of for

	printf ("The sum of the even numbers is %u", sum);	//display the total of sum

	return 0;
} //end main
