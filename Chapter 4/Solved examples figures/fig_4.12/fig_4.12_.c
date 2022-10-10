// fig 4.12: using the continue statement at the for statement

#include <stdio.h>

//main function where the program begins to execute
int main (void)
{
	unsigned int counter;	//define counter

	for (counter = 1; counter <= 10; ++counter){

		if (counter == 5){
			continue;	//skip the loop at counter is 5
		}

		printf ("%-3u", counter);	//print each number at the following the conversion specifier left justify
	}

	printf ("\nWe skipped printing at loop counter == 5, using continue statement");

	return 0;
}
