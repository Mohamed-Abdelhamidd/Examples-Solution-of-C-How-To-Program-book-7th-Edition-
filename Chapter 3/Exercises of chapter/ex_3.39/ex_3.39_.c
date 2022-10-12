//Ex 3.39: checkerboard pattern of asterisks

#include <stdio.h>

int main (void)	//main function where the program begins
{
	unsigned int column;	//column variable responsible definition
	unsigned int row;		//row variable responsible definition

	column = 1;		//initialize counter by one
	row = 1;		//initialize counter by one

	//loop of the output
	while (column <= 8){

		//if the row was odd number as there is remainder 1
		if (column % 2 == 1){
			while (row <= 8){
				printf ("%s", "* ");	//print space after asterisk
				++row;	//increment column counter
			} //end of while
		} //end of if

		//if the row was even number as there is nor remainder --> = 0
		else{
			while (row <= 8){
				if (row == 1){
					printf ("%s", " ");
				}

				printf ("%s", "* ");	//put space before asterisk
				++row; //increment column number
			} //end of while
		} //end of else

		puts(""); //newline
		row = 1;  //reset the row counter as row before reset has value 8
		++column; //increment the to the new row
	}//end of the big while

	return 0;
}// end of main




/*
 answer is:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

*/
