// ex3.30: Dangling else

#include <stdio.h>

int main (void)
{
	//a.1
	int x = 9;
	int y = 11;

	if (x < 10)
	if (y > 10)
	puts("****");
	else
	puts("####");
	puts("$$$$");

	puts(" ");

	//a.2
	x = 11;
	y = 9;

	if (x < 10)
	if (y > 10)
	puts("****");
	else
	puts("####");
	puts("$$$$");

	puts(" ");

	//b.1
	x = 9;
	y = 11;

	if (x < 10){
	if (y > 10)
	puts("****");
	}
	else {
	puts("####");
	puts("$$$$");
	}

	puts(" ");

	//b.2
	x = 11;
	y = 9;

	if (x < 10){
	if (y > 10)
	puts("****");
	}
	else {
	puts("####");
	puts("$$$$");
	}


}

