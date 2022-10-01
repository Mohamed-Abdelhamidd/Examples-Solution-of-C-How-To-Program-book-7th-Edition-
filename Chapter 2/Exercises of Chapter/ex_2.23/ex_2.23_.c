//Ex 2.23: write program takes 3 inputs and then defines largest and smallest


#include <stdio.h>

int main (void)	   //main function where the program begins execution
{
	int num1, num2, num3;
	int largest, smallest;

	printf ("Enter three different integers: ");	//prompt
	scanf ("%d%d%d", &num1, &num2, &num3);	//read the integers through stdin

	largest = num1;
	smallest = num1;

	if (num2 > largest){   // defining the largest number
		largest = num2;
	}
	if (num3 > largest){
		largest = num3;
	}

	if (num2 < smallest){   // defining the smallest number
		smallest = num2;
	}
	if (num3 < smallest){
		smallest = num3;
	}

	printf ("\n");

	printf ("the largest is %d\n", largest);
	printf ("the smallest is %d\n", smallest);

	return 0;
}				// end of main function
