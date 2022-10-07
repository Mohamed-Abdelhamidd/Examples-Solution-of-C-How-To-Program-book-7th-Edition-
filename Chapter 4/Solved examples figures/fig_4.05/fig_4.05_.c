// fig 4.5
// write a code to sum the even numbers from 2 to 100

#include <stdio.h>

int main (void)
{
	unsigned int number;
	unsigned int sum;

	sum = 0;

	for (number = 2; number <= 100; number+=2){
		printf ("%u\n",number);
		sum += number;
	}

	printf ("the sum is %u", sum);
}


