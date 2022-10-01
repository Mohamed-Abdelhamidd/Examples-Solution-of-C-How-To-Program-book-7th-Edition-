//Ex 2.30: Make a program separate digits from each other

#include <stdio.h>

int main (void)
{
	int number, remainder, division;

	printf ("Enter 5 digits number: ");
	scanf ("%d", &number);			//get number by using conversion specifier and ampersand

	printf ("\n");

	//get 10000th digit
	division = number / 10000;
	remainder = number % 10000;		//get the left 4 digits remaining
	printf ("%d   ", division);

	//get 1000th digit
	division = remainder / 1000;
	remainder = remainder % 1000;	//get the left 3 digits remaining
	printf ("%d   ", division);

	//get 100th digit
	division = remainder / 100;
	remainder = remainder % 100;	//get the left 2 digits remaining
	printf ("%d   ", division);

	//get 10th digit
	division = remainder / 10;
	remainder = remainder % 10;		//get the left 2 digits remaining
	printf ("%d   ", division);

	//get 1th digit
	division = remainder / 1;
	remainder = remainder % 1;		//get the left 1 digit remaining
	printf ("%d   ", division);

	return 0;
}	//end of main function

