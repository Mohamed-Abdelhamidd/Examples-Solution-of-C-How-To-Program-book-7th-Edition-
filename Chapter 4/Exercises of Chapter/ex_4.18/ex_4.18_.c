//ex_4.18: Bar chart printing program

#include <stdio.h>

int main (void){

	unsigned int bar;	//control variable
	unsigned int number;//limit
	unsigned int star;	//control variable

	puts("Bar Chart printing programs");

	//read the numbers 5 times
	for (bar = 1; bar <= 5; ++bar){

		printf ("Enter a chart length: ");
		scanf ("%u", &number);

		printf ("%u:", number);

		for (star = 1; star <= number; ++star){	//width for loop

			printf("*");
		}

		puts ("");	//new-line
	}

}
