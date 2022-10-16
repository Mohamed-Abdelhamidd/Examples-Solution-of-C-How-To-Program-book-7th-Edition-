// ex4.11: Find the smallest value

#include <stdio.h>	//preprocessor directive

int main (void){	//main function where the program begins to execute

	unsigned int loop;	//the number of iteration
	unsigned int number;	//the storage variable of number
	unsigned int counter;	//the control variable of for
	unsigned int smallest;	//the smallest value

	printf("Enter the number of comparison numbers: ");	//prompt
	scanf ("%u", &loop);	//get the value of iteration

	for (counter = 1; counter <= loop; ++counter){

		printf ("Enter a number: ");	//get numbers
		scanf ("%u", &number);

		if (loop == 1)	//to avoid garbage value, at first loop we assign value to smallest
			smallest = number;

		if (number < smallest)	//comparison
			smallest = number;
	}//end of for

	puts (" ");	//newline
	printf ("\nThe smallest number is %u", smallest);	//display the result

	return 0;
}//end of main
