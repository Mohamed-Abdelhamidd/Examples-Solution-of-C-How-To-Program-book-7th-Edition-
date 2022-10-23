// ex4.17: calculating credit limit

#include <stdio.h>

int main (void){

	float credit;
	float balance;
	unsigned int id;
	unsigned int counter;

	puts ("credit limits calculator");

	for (counter = 1; counter <= 3; ++counter){

		printf ("Enter your id: ");
		scanf ("%u", &id);
		printf ("Enter your balance: ");
		scanf ("%f", &balance);
		printf ("Enter your credit: ");
		scanf ("%f", &credit);

		if (credit > balance/2){
			printf ("%u you passed the allowed balance %.2f\n", id, balance/2);
		}
		else {
			printf ("%u you still did not pass the limit remains %.2f\n", id, balance / 2 - credit);
		}

		puts ("");
	}
}
