//fig5.04: Maximum number comparator using function

#include <stdio.h>

int maximum (int x, int y, int z);	//function prototype

int main (void){

	int number1;
	int number2;
	int number3;

	printf ("Enter a three numbers to compare between them: ");
	scanf ("%d%d%d", &number1, &number2, &number3);

	printf ("The largest number is: %d", maximum (number1, number2, number3));	//function caller with arguments
}//end main

//function definition
int maximum (int x, int y, int z){	//function parameters
	int max;

	max = x;

	if (y > max){
		max = y;
	}
	if(z > max){
		max = z;
	}

	return max;	//return the result
}//end of maximum
