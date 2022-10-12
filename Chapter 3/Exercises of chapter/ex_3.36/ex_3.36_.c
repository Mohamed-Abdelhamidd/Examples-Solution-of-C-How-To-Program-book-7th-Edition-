// ex3.36: How fast is your computer

#include <stdio.h>

int main (void)
{
	unsigned int count = 1;
	unsigned int multiple = 1;

	while (count <= 1000000000){

		if (count%100000000 == 0){

			printf ("%u\n", 100000000 * multiple);

			++multiple;
			++count;
		}// end if

		else{
			++count;
		}//end else
	}//end of while

	return 0;
}
