//fig 4.6: calculating compound interest using for statement

#include <stdio.h>
#include <math.h>  //to include math functions

int main (void)
{
	float principal = 1000;
	float rate;
	unsigned int year;
	float amount;

	printf ("%4s	    	%21s", "year", "Amount on deposit\n"); //%4s to add 4 spaces for the string year, and %21 add 21 spaces for string amount on deposit and put it at most left

	for (year = 1; year <= 10; ++year){		//initial the year with 1, and show each year calculation with the new year so we used it at the for statement

		for (rate = 5; rate <= 10; ++rate){	//loop to show each year

			amount = principal * pow (1 + (rate/100), year);	// pow (the number, the power)

			printf ("%-4u\trate %.2f: %-20.2f\n", year,rate/100, amount); //%20.2f : 20 is adding space for number with 20 space, .2 showing the float numbers after point
		}


	}
	return 0;
}
