// ex3.44:side of the right triangle

#include <stdio.h>
#include <math.h>	//preprocessor directive of math library

int main (void)
{
	float largestSide;
	float secondSide;
	float thirdSide;

	puts("\"Right triangle sides definer\"");
	printf ("%s", "Enter the Largest side (-1 to end): ");
	scanf ("%f", &largestSide);	//take largest side in to avoid garbage value

	while (largestSide != -1){	//if not sentinel

		printf ("%s", "Enter the second Side: ");
		scanf ("%f", &secondSide);	//take in the second side
		printf ("%s", "Enter the third side: ");
		scanf ("%f", &thirdSide);	//rake in the third side

		if (pow(largestSide, 2) == (pow(secondSide, 2) + pow(thirdSide, 2))){	//law of defining the right triangle
			printf ("It is Right Triangles' sides\n");
		}

		else{ //if not equal
			printf ("It is not Right Triangles' side\n");
		}

		puts("");	//newline

		printf ("%s", "Enter the Largest side (-1 to end): ");	//take in the largest side and check if sentinel value
		scanf ("%f", &largestSide);
	}//end of while

	return 0;
}//end of main
