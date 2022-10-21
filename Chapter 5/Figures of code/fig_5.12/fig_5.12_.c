//fig_5.12:rolling six_sided Die 6000000 times to show that these numbers appears likelihood

#include <stdio.h>
#include <stdlib.h>	//preprocessor directive for standard library that contains the prototype for rand function

int main (void) //main function where the program begins to execute
{
	unsigned int frequency1 = 0;	//rolled 1 counter
	unsigned int frequency2 = 0;	//rolled 2 counter
	unsigned int frequency3 = 0;	//rolled 3 counter
	unsigned int frequency4 = 0;	//rolled 4 counter
	unsigned int frequency5 = 0;	//rolled 5 counter
	unsigned int frequency6 = 0;	//rolled 6 counter

	unsigned int roll;	//control variable for for statement
	unsigned int face;	//variable to store roll value at it

	for (roll = 1; roll <= 6000000; ++roll){

		face = 1 + (rand() % 6);	//remainder of the random number to the 6 addition to 1 as we will get from 5 to 0 so we need scaling

		switch (face){	//switch face

		case 1:	//at value 1 increase frequency with 1
			++frequency1;
			break;

		case 2: //at value 2 increase frequency with 1
			++frequency2;
			break;

		case 3: //at value 3 increase frequency with 1
			++frequency3;
			break;

		case 4: //at value 4 increase frequency with 1
			++frequency4;
			break;

		case 5: //at value 5 increase frequency with 1
			++frequency5;
			break;

		case 6: //at value 6 increase frequency with 1
			++frequency6;
			break;
		}//end switch
	}//end for

	printf ("%s%13s\n", "Face", "Frequency");
	printf ("   1%13u\n", frequency1);
	printf ("   2%13u\n", frequency2);
	printf ("   3%13u\n", frequency3);
	printf ("   4%13u\n", frequency4);
	printf ("   5%13u\n", frequency5);
	printf ("   6%13u\n", frequency6);

}//end main
