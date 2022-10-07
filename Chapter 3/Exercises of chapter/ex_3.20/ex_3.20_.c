// Ex 3.20: Salary Calculator

#include <stdio.h>

int main (void)	//main function where the program begins to start
{
	float hourlyRatePayment;
	unsigned int workingHours;
	float theSalaryPaid;
	float exceededHours;

	printf ("Enter worked hours (-1 to end): ");
	scanf ("%u", &workingHours);

	while (workingHours != -1){
		printf ("Enter the payment rate hourly: ");
		scanf ("%f", &hourlyRatePayment);

		exceededHours = 0;	//initialize with zero

			if (workingHours > 40){	//over time payment
				exceededHours = (workingHours - 40) * (1.5 * hourlyRatePayment);
				theSalaryPaid = 40 * hourlyRatePayment + exceededHours;
			}// end of if
			else{	//less then 40hours payment
				theSalaryPaid = workingHours * hourlyRatePayment;
			}// end of else

		printf ("The salary paid is $%.2f\n", theSalaryPaid);
		printf ("\nEnter worked hours (-1 to end): ");
		scanf ("%u", &workingHours);
	}// end of while

	return 0;
}// end of main

