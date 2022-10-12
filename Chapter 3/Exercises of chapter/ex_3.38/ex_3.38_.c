//Ex3.38: Count 7s

#include <stdio.h>

int main (void)
{
	unsigned int ones;
	unsigned int count = 0;
	unsigned int number;
	unsigned int tenThousands;
	unsigned int thousands;
	unsigned int hundreds;
	unsigned int tenth;
	unsigned int remainder;
	unsigned int sevensCounter = 0;

	puts("7s Counter");

	printf ("Enter 5- digits or fewer number (-1 to end): ");
	scanf ("%u", &number);

	while (number != 1){

		  //get the tenth thousand number
     		tenThousands = number/ 10000;
			remainder = number % 10000;

		  //increment if 7
			if (tenThousands == 7){
				++sevensCounter;
			}

		   //get thousandth digit
			thousands = remainder / 1000;
			remainder = remainder % 1000;

		  //increment if 7
			if (thousands == 7){
				++sevensCounter;
			}

		  //get hundredth digit
			hundreds = remainder / 100;
			remainder = remainder % 100;

		  //increment if 7
			if (hundreds == 7){
				++sevensCounter;
			}

		  //get tenth digit
			tenth = remainder / 10;
			remainder = remainder % 10;

		  //increment if 7
			if (tenth == 7){
				++sevensCounter;
			}

		  //get ones digit
			ones = remainder ;

		  //increment if 7
			if (ones == 7){
				++sevensCounter;
			}

		printf ("the number has %u sevens\n\n", sevensCounter);

		sevensCounter = 0;	//reset the counter before the next loop

		printf ("Enter 5- digits or fewer number (-1 to end): ");
		scanf ("%u", &number);
	}

	return 0;
}
