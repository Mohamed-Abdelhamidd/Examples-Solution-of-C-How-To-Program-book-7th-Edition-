// Ex 3.32: square of asterisks

#include <stdio.h> //preprocessor directive

//main function where the function begin
int main (void)
{
	int side;					//store the value
	unsigned int width ;		//responsible on width
	unsigned int length = 1;	//responsible on length

	printf ("Enter the side of the needed square: ");	//prompt
	scanf ("%d", &side);	//take the value of sides

	//length counter
	while (length <= side){

		width = 1;	//to reset the value of width at each column

		//width counter
		while (width <= side){
			printf("*");
			++width;
		}//end of while

		printf("\n");	//shift to a new line

		++length;	//increment the length side
	}// end of while

	return 0;
}//end of main
