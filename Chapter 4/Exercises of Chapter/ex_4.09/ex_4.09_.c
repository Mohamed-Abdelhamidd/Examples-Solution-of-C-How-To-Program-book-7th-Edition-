// ex4.09: sum a sequence of integers

#include <stdio.h>	//preprocessor directive

int main (void){	//main function where the program starts to execute

	unsigned int count;	//number of loops
	unsigned int total;	//sum variable
	unsigned int counter;	//control variable for for statement

	total = 0;	//initialize the total of of sum as zero

	printf ("Enter a number of sum sequence: ");	//prompt
	scanf ("%u", &count);	// get in the value of iteration

	for (counter = 1; counter <= count; ++counter){
		total += 100;	//sum values together
		printf ("\t%u", total);	//print to screen the sequence of summation
	}//end of for

	return 0;
}	//end of main
