//ex3.43: Side of a triangle

#include <stdio.h>

int main (void)
{
	float firstSide;
	float secondSide;
	float thirdSide;

	puts ("\"Checker if the sides represent triangle or no\"");	//prompt
	printf ("%s","Enter first side (-1 to end): ");	//prompt
	scanf ("%f", &firstSide);	//take in the value


	while (firstSide!= -1){	//if not sentinel

	    printf ("%s","Enter second side: ");
	    scanf ("%f", &secondSide); //get second value
	    printf ("%s","Enter third side: ");
	    scanf ("%f", &thirdSide);  //get third value

		if (firstSide + secondSide > thirdSide){	//a+b > c
			if (firstSide + thirdSide > secondSide){	//b+c > a
				if (thirdSide + secondSide > firstSide){	//a+c > b
					printf ("these are sides of a triangle\n");	  //if these three conditions were true print the message
				}
				else{	//out of the last if
					printf ("these are not sides of a triangle\n");
				}
			}
			else{	//out of the second if
				printf ("these are not sides of a triangle\n");
			}
		}
		else{	//out of first if
			printf ("these are not sides of a triangle\n");
		}

		puts(""); //newline

		printf ("%s","Enter first side (-1 to end): ");
		scanf ("%f", &firstSide);	//get first side
	}

	return 0;
	}



