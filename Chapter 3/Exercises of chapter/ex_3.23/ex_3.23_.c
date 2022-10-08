//Ex 3.23: Find the largest number

#include <stdio.h>

int main (void)
{
	unsigned int counter;
	unsigned int id;
	float number;
	float largest;

	counter = 1;	//set counter to 1
	largest = 0;	//set largest to 0 to be comparative

	//loop 10 times
	while (counter <= 10){

		printf ("%u- Enter the sales amount: ", counter); //Prompt
		scanf ("%f", &number);

		//compare the entered value to the largest
		if (number > largest){
			largest = number;	//if largest set it to the number
			id = counter;		//type the winner number
		}

		++counter;	//increment the counter
	}

	printf ("\nthe winner is the seller number %u and sold %.2f", id, largest);

    return 0;
}

