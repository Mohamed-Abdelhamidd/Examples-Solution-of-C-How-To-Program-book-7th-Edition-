//Ex 3.24: Tabular Output

#include <stdio.h>

int main (void)
{
	unsigned int counter = 1;

	puts ("N\t10*N\t100*N\t1000*N");

	while (counter <= 10){

		printf ("%d\t%d\t%d\t%d\n", counter, counter*10, counter*100, counter*1000);

		++counter;
	}

	return 0;
}
