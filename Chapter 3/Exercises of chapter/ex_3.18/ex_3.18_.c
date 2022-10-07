// Ex 3.18: Sales Commission Calculator

#include <stdio.h> //Preprocessor directive

int main (void) //main function where the program begins execution
{
	float soldAmount;
	float salaryOfWeek;

	printf ("Enter the Sold Amount: ");
	scanf ("%f", &soldAmount);

	while (soldAmount != -1){
		salaryOfWeek = 200 + (soldAmount * 0.09);
		printf ("The salary is $%.2f\n", salaryOfWeek);
		printf ("\nEnter the Sold Amount: ");
		scanf ("%f", &soldAmount);
	}// end of while

	return 0;
}// end of main

