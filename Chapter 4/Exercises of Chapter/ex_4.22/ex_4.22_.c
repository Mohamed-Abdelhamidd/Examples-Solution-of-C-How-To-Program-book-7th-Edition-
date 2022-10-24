// fig 4.07: counting letter grades with switch

#include <stdio.h>

int main (void)
{
	int grade;
	unsigned int aCount = 0;	//number of As
	unsigned int bCount = 0;	//number of Bs
	unsigned int cCount = 0;	//number of Cs
	unsigned int dCount = 0;	//number of Ds
	unsigned int fCount = 0;	//number of Fs
	float average;

	puts ("Enter the letter grades.");	//prompt
	puts ("Enter the # to end the input.");	//prompt

	// loop till the sentinel value is entered and get character each time (do not initialize it before the loop because that will form an infinite loop as the grade will always has one character)
	while ((grade = getchar()) != '#'){

		//determine which grade is entered
		switch (grade){

		case 'A':	//grade was uppercase A
		case 'a':	//grade was lowercase a
			++aCount;	//increment
			break;	//Exit the switch

		case 'B':	//grade was uppercase B
		case 'b':	//grade was lowercase b
			++bCount;	//increment
			break;	//Exit the switch

		case 'C':	//grade was uppercase C
		case 'c':	//grade was lowercase c
			++cCount;	//increment
			break;	//Exit the switch

		case 'D':	//grade was uppercase D
		case 'd':	//grade was lowercase d
			++dCount;	//increment
			break;	//Exit the switch

		case 'F':	//grade was uppercase F
		case 'f':	//grade was lowercase f
			++fCount;	//increment
			break;	//Exit the switch

		case '\n':	//do not do anything (ignore) newline
		case '\t':	//do not do anything (ignore) tabs
		case ' ':	//do not do anything (ignore) spaces
		    break;	//Exit the switch

		default:	// in case of (nothing from the above)
			printf ("%s\n", " Incorrect letter grade entered");
			puts ("Enter a new grade.");
			break;
		}
	}

	average = (float)(aCount + bCount + cCount + dCount + fCount) / 5; 	//explicit

	// print the total of each grade
	puts("Total of each grade number entered:");
	printf ("A: %u\n", aCount);
	printf ("B: %u\n", bCount);
	printf ("C: %u\n", cCount);
	printf ("D: %u\n", dCount);
	printf ("F: %u\n", fCount);
	printf ("Average = %.2f\n", average);

	return 0;
}

