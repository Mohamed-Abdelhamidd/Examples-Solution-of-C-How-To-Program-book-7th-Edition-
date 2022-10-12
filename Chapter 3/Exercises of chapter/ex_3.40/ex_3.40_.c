// ex 3.40: Multiples of 2 with an infinite loop

#include <stdio.h>

int main (void)
{
	unsigned int counter;
	unsigned int multiply;

	counter = 1;	//initialize loop counter with 1
	multiply = 1;	//initialize the multiply ny 1

	//infinite loop as the condition is always true
	while (counter != 0){
		multiply = multiply * 2;	//multiply counter by 2 the result every time
		printf ("%u\n", multiply);	//print the multiples of 2
		++counter;	//increment
	}//end of while

	return 0;
}//end of main


//the result after it reach the maximum range of storing at the variable it will give output zero as it floods out of the container (no value)
