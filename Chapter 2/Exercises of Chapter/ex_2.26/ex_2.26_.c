//Ex 2.26: write a program that read the 2 integers and determine if the first number is multiple by the second

#include <stdio.h>		// preprocessor directive

int main (void)
{
	int num1, num2, multiple;

	printf ("Enter 2 numbers to check");		//prompt
	scanf ("%d%d", &num1, &num2);		// read the 2 variables

	multiple = num1 % num2;		//divide the first number on the second to see if it is multiple

	printf ("\n");

	if (multiple == 0){
		printf ("The number %d is from multiple of %d\n", num1, num2);
	}

	if (multiple != 0){			//if there is remainder so the the second number is not from the multiples of first number
		printf ("The number %d is not from multiple of %d\n", num1, num2);
	}

	return 0;
}		//end of main function
