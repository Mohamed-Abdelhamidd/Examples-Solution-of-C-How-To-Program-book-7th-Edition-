// Ex 3.25: Tabular Output

#include <stdio.h>

int main (void)
{
	unsigned int counter = 3;

	printf ("A\tA+2\tA+4\tA+6\n");

	while (counter <= 15){

		printf ("%d\t%d\t%d\t%d\n", counter, counter + 2, counter + 4, counter + 6); //Hint that you shouldn't use arithmetic assignment operators as that will change from the value of the counter
		counter += 3;
	}

	return 0;
}
