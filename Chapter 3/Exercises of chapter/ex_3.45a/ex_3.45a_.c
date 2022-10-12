//ex_3.45a: Factorial

#include <stdio.h>

int main (void) {
	unsigned int number;
	unsigned int factorial;

	factorial = 1;

	printf ("Enter the factorial number required to calculate (-1 to end): ");
	scanf ("%u", &number);	//get i  the first value to avoid sentinel

	while (number != -1){	//if number not -1, loop

	printf ("factorial (%d) = ", number);	//print the factorial part with the original value of the number

	if (number == 0){	//factorial 0
		factorial = 1;
	}//end of if

	//any other number without zero
	else{
		while (number > 0){	//loop till it is larger than 0
			factorial = factorial * number;	//5! = 5.4.3.2.1 ---> 5*4---> 20*3 ---> 60*2 ----> 120*1
			--number; //decrement
		}//end of while
	}//end of else

	printf ("%d\n", factorial);	//print the result
	factorial = 1; //reset factorial before taking the new number factorial

	puts (""); //newline
	printf ("Enter the factorial number required to calculate (-1 to end): ");
	scanf ("%u", &number);	//take the new value
	}// end of big while

	return 0;
}//end of main
