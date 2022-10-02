// Ex 3.5: write a program that calculates sum of 1 to 10 using while

#include <stdio.h>		//preprocessor directive to perform text replacement at preprocessor stage for standard I/O library
#include <limits.h>		//preprocessor directive to include the limits header file to know the limit of each type

int main (void)			//main function where the program begins to execute
{
	int sum;			//declare sum
	unsigned int counter; //declare counter with positive values

	sum = 0;			//initialize with zero
	counter = 1;		//initialize counter with 1

	while (counter < 11){	//repetition condition
		sum += counter;		//additive assignment operator
		counter++;			//increase counter by one at each loop
	}

	printf_s("The sum is %d", sum); //printf_s is a printf_(secure) this is for CERT issues to avoid vulnerabilities

	return 0;
}


