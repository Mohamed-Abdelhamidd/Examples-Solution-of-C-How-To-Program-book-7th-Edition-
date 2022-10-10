// fig_4.11: using the break statement in the for statement

#include <stdio.h>

//function main where the function begins to execute
int main (void)
{
	unsigned int counter;	//define the counter

	for (counter = 1; counter <= 10; ++counter){

		if (counter == 5){
			break;	//immediate break the loop at counter = 5
		} //end of if

		printf ("%u  ", counter);
	} //end of for

	printf ("\nBroke out the loop at counter == %u", counter);

	return 0;
} //end of main

