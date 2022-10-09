// Ex 3.28 what the code will get:

#include <stdio.h>

int main (void)
{
	unsigned int count = 1;

	while (count <= 10){
		puts (count % 2 ? "****" : "++++++++"); //this is another way to use puts as we can put condition statement between puts and the double qouts only with the printing section
		++count;
	}

	return 0;
}

// the program will print at true value **** (all odd numbers) and ++++++ with (even numbers)
