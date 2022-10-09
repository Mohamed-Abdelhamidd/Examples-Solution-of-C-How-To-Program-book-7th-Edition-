// Ex3.29 : what the following program will print

#include <stdio.h>

int main (void)
{
	unsigned int rows = 10;
	unsigned int column;	//we didn't initialize it with a value as we need to initialize it each time at the big loop to repeat the columns

	while (rows >= 1){

		column = 1;		//each row loop the column will be reset into 1 to count numbers of the columns

		while (column <= 10){

			printf ("%s", column % 2 ? "<" : ">");	//another way to print use conditional statement
			++column;	//increment the number of the column
		} //end of column while

		--rows;		// decrement the number of the rows
		puts(" ");	//print new line as empty puts automatically prints new line
	} //end of row while

	return 0;
} //end of main


/* answer is
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><>
<><><><><> */


