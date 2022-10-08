//Ex 3.21: write an exercise shows the post-decrement and pre-decrement

#include <stdio.h>

int main (void)	//main function where the program begind to execute
{
	int a;

	a = 5;

	printf ("%d\n", --a); // a = 4	(Pre-decrement): decreasing firstly and using the new value in the expression
	printf ("%d\n", a);   // a = 4

	printf ("%d\n", a--); // a = 4	(post-decrement): using the current value in the expression firstly and then decreasing
	printf ("%d\n", a);   // a = 3

	return 0;
}// end of main
