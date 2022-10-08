// Ex 3.22: printing numbers from a loop with 3  spaces between each number

#include <stdio.h>

int main (void)
{
	unsigned int counter;
	counter = 1;

	while (counter <= 10){
		printf ("%u   ", counter++); //use the current value at the statement then increment and use it at next iteration
	}
	return 0;
}

