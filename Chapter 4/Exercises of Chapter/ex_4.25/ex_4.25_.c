//ex_4.25: Table of decimal, Binary, octal, and hexadecimal

#include <stdio.h>

int main (void){

	unsigned int decimal;

	puts ("Decimal\tOctal\tHexa");

	for (decimal = 1; decimal <= 265; ++decimal){

		printf ("%u\t%o\t%x\n", decimal, decimal, decimal);

	}
}
