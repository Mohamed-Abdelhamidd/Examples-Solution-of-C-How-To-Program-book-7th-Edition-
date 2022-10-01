// Ex 2.31: make a table to calculate the square and cube of the number form 0 to 10

#include <stdio.h>

int main (void)
{
	int num;

	printf ("number\tsquare\tcube\n");

	num = 0;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 1;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 2;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 3;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 4;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 5;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 6;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 7;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 8;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 9;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	num = 10;
	printf ("%d\t%d\t%d\n", num, num * num, num * num * num);

	return 0;
}
