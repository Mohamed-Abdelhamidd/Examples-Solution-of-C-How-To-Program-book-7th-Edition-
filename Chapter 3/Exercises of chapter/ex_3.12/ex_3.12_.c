// Ex 3.12: What the following program prints

#include <stdio.h>

int main (void)
{
	unsigned int x = 1, total = 0, y;

	while (x <= 10){
		y = x * x;
		printf_s ("%d\n", y);
		total += y;
		++x;
	} //end while

	printf_s ("The total is %d\n", total);

	return 0;
} //end main

// the program prints the sum of the power of each
