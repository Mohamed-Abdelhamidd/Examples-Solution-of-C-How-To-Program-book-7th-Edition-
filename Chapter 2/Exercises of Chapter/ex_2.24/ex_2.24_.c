// Ex 2.24: Odd or Even

#include <stdio.h>

int main (void)
{
	int number, check;

	printf ("Enter a number: ");
	scanf ("%d",&number);

	check = number % 2;

	printf ("\n");

	if (check == 0){
		printf ("The number is even\n");
	}

	if (check != 0){
		printf ("The number is odd\n");
	}

	return 0;
}

