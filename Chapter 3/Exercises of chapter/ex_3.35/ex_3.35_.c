// Ex3.35: printing the decimal number equivalent for the binary number

#include <stdio.h>
#include <math.h>

int main (void)
{
	unsigned int number;
	unsigned int tenThousands;
	unsigned int thousands;
	unsigned int hundreds;
	unsigned int tenth;
	unsigned int ones;
	unsigned int remainder;
	unsigned int decimalNumber;

	puts("5-digit binary into decimal converter");
	printf ("Enter the binary number (-1 to end): ");
	scanf ("%u", &number);

	while (number != -1){

      //get the tenth thousand number
		tenThousands = number/ 10000;
		remainder = number % 10000;

	  //get thousandth digit
		thousands = remainder / 1000;
		remainder = remainder % 1000;

	  //get hundredth digit
		hundreds = remainder / 100;
		remainder = remainder % 100;

	  //get tenth digit
		tenth = remainder / 10;
		remainder = remainder % 10;

	  //get ones digit
		ones = remainder ;

	  //11111 = 1 * 2^0 + 1 * 2^1 + 1 * 2^2 + 1 * 2^3 + 1 * pow(2, 4)
		decimalNumber = ones * pow(2, 0) + tenth * pow(2, 1) + hundreds * pow(2, 2) + thousands * pow(2, 3) + tenThousands * pow(2, 4);

		puts ("");
		printf ("The decimal number is: %u\n", decimalNumber);

		printf ("Enter the binary number (-1 to end): ");	//get the next number
		scanf ("%u", &number);
	}

	return 0;
}
