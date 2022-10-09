//Ex_3.26: Find the two largest numbers

#include <stdio.h>	//preprocessor directive

int main (void)
{
	unsigned int counter;
	float firstLargest;
	float secondLargest;
	float number;
	float garbage;

	firstLargest = 0;	//initialize with 0 to be able for comparison
	secondLargest = 0;	//initialize with 0 to be able for comparison
	counter = 1;		//initialize with 1 to be able for comparison

	while (counter <= 10){

		printf ("%d- Enter a number: ", counter);	//Prompt
		scanf ("%f", &number);

		//finding the first largest number
		if (number > firstLargest)	//no need to braces as it is just one statement
			firstLargest = number;	//assign the number to largest

		//finding the second largest number
		else if (number < firstLargest )	//no need to braces as it just one statement which is the if statement
				if (number < secondLargest)	//no need braces as it has just one statement
					garbage = number;
				else
					secondLargest = number;	//assign the number to the second largest

		++counter;	//increment
	} //end while

	printf ("\n\nLargest Numbers are %.2f then %.2f ", firstLargest, secondLargest);

	return 0;
} //end main
