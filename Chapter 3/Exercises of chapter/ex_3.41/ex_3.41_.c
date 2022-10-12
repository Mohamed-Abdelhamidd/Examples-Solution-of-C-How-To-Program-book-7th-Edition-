//ex3.41: write a program that reads the radius of a circle (as float) and compute and prints the diameter, the circumference, and area

#include <stdio.h>	//preprocessor directive of the standard library
#include <math.h>	//preprocessor directive for the math functions library

//main dunction where the program begins to start
int main (void)
{
	float radius;	//variable to store radius
	float diameter;	//variable to store diameter
	float area;		//variable to store area
	float circumference;	//variable to store circumference

	puts ("area and circumference calculator");	//prompt
	printf ("%s", "Enter the radius of the circle (- 1 to end): "); //prompt
	scanf ("%f", &radius);	//take in the value to avoid the garbage value

	//calculation loop
	while (radius != -1){	//sentinel value
		diameter = radius * 2;
		circumference = 2 * 3.14159 * radius;
		area = 3.14159 * pow (radius ,2);	//pow function to determine the power

		printf ("Diameter: %.3f\nArea: %.3f\nCircumference: %.3f\n", diameter, area, circumference); //print result
		puts (""); //newline

		printf ("%s", "Enter the radius of the circle (- 1 to end): ");
		scanf ("%f", &radius);	//take the new value
	} //end of while

	return 0;
}//end main
