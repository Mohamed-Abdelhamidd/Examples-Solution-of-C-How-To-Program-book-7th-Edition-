//Ex3.37: Detection multiple of 10

#include <stdio.h>

//main function where the program starts to begin
int main (void)
{
	unsigned int count = 1;	//declaration by count

	while (count <= 100){

		printf ("*");	//print asterisk at each count

	  //if number is multiple of 10
		if (count%10 == 0){

			puts (""); //newline
			++count;   //increment by one for new loop
		}//end of if

	  //if not multiple of ten
		else{
			++count; //new loop
		}//end of else
	}//end of while

	return 0;
}//end of main
