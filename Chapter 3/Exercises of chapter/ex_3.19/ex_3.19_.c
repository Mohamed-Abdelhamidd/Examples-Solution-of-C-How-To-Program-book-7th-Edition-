// Ex 3.19: interest Calculator

#include <stdio.h>

int main (void)		//main function where the program begins to execute
{
	unsigned int days;	// there is no negative number
	float principal;	// float number
	float rate;			// rate in decimal
	float interest;		// the result of operation

	printf("Enter the loan principal (-1 for end): ");		//taking the first value of the principal to avoid garbage value
	scanf ("%f", &principal);

	while (principal != -1){
		printf ("Enter the interest rate: ");
		scanf ("%f", &rate);
		printf ("Enter term of the loan in day: ");
		scanf ("%u", &days);

		interest = principal * rate * days / 365;		//calculation

		printf ("The interest charge is $%.2f\n", interest);
		printf("\nEnter the loan principal (-1 for end): ");	//the next operation begin
		scanf ("%f", &principal);
	} //end of while

	return 0;
} //end of main


