//fig 4.6: calculating compound interest using for statement

#include <stdio.h>
#include <math.h>  //to include math functions

int main (void)
{
	float principal = 1000;
	float rate = 0.05;
	unsigned int year;
	float amount;

	printf ("%4s%21s", "year", "Amount on deposit\n"); //%4s to add 4 spaces for the string year, and %21 add 21 spaces for string amount on deposit and put it at most left

	for (year = 1; year <= 10; ++year){		//initial the year with 1, and show each year calculation with the new year so we used it at the for statement
		amount = principal * pow (1 + rate, year);	// pow (the number, the power)
		printf ("%4u%20.2f\n", year, amount); //%20.2f : 20 is adding space for number with 20 space, .2 showing the float numbers after point
	}
	return 0;
}
