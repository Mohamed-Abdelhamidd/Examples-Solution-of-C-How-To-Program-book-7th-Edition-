//ex4.10: Average a sequence of integers

#include <stdio.h>

int main (void)	//main function where the program starts to begin
{
	float average;	//the average variable
	unsigned int value;	//the variable where the number is stored
	unsigned int sum;	//sum of numbers
	unsigned int count;	//number of entered numbers

	count = 0;	//initialize count by zero
	sum = 0;	//initialize sum by zero

	printf ("Enter the number (9999 to have average): ");	//prompt
	scanf ("%u", &value);	//get the value to avoid garbage value

	while (value != 9999){	//sentinel value is 9999

		sum += value;	//sum the numbers together
		++count;	//increment the counter to count the number of the numbers

		printf ("Enter the number (9999 to have average): ");	//get the sentinel value
		scanf ("%u", &value);	//get the value
	}	//end of while

	average = (float) sum / count;	//explicit definition type

	printf ("the average is: %8.2f", average);	//print right justify with 8 spaces

	return 0;
}	//end of main

