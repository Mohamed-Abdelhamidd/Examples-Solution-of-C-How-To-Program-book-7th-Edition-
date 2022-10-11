// ex3.34: Palindrome Tester

#include <stdio.h>

int main (void)
{
	unsigned int number;
	unsigned int remainder;
	unsigned int tenThousands;
	unsigned int thousands;
	unsigned int hundreds;
	unsigned int tenth;
	unsigned int ones;
	unsigned int palindrom;

	puts ("Program to check Palindrom Number");

	printf ("Enter a five digits number (-1 to end): ");
	scanf ("%u", &number); // get the number first time to avoid garbage value

	//loop for testing
	while (number != -1){

	tenThousands = number / 10000;	//get the most left number
	remainder = number % 10000;		//get the rest 4 digits remains from the number

	thousands = remainder / 1000;	//get the thousandth number
	remainder = remainder % 1000;	//get the rest 3 digits remaining

	hundreds = remainder / 100;		//get the hundredth number
	remainder = remainder % 100;	//get the rest 2 digits

	tenth = remainder / 10;			//get the tenth number
	remainder = remainder % 10;		//get the rest number remaining

	ones = remainder / 1;			//get last number at ones variable (we could write ones = remainder)
	remainder = remainder % 1;		//no need to write this statement as the remainder is zero but for symmetric we wrote

	palindrom = (ones * 10000) + (tenth * 1000) + (hundreds * 100) + (thousands * 10) + (tenThousands * 1);	//reverse the number

	// if reversed number is same as the original
	if (palindrom == number){
		puts ("It is palindrom number");
	}

	// if reversed not same as original
	else {
		puts ("It is not palindrom number");
	}

	puts ("");	//jump new line

	printf ("Enter a five digits number (-1 to end): ");	//get the new number and to see if sentinel
	scanf ("%u", &number);

	}// end of while

	return 0;
}
