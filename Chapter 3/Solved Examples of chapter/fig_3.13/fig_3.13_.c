// fig 3.13: demonstrate the difference between prefixed and postfixed variable

#include <stdio.h>		//preprocessor directive to include the library

int main (void)    // the main function where the program begins to execute
{
	int c;	// declare variable name from integer type at memory allocation

	c = 5;	// initialize the c variable and store to memory

	printf ("%d\n", c);		//c = 5
	printf ("%d\n", ++c);	// c = 6 preincrement (increment firstly and use the new value at the exxpression it is at)
	printf ("%d\n\n", c);	// c = 6 the new value is still remains

	c = 5;

	printf ("%d\n", c);		// c = 5
	printf ("%d\n", c++); 	// c = 5 postincremented (it uses the current value of the c at the expression it is at firstly and then increment
	printf ("%d\n", c);		// c = 6 (the new value after increment is still remains)

	return 0;
}	//End of the main function

