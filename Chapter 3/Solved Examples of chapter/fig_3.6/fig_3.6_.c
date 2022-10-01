// fig 3.6: Program to determine the average grades of class with sentinal-controlled repetition with unknown students numbers

#include <stdio.h>   //Preprocessor Directive

int main (void)   // Main function where the program begins to execute
{
    int grade;    //contains garbage value
	int sum;    //contains garbage value
	unsigned int counter; 	// contain garbage value
	float average;   // we need to make it float

	sum = 0;	//initialize it with 0
	counter = 0;    //initialize it with 0

	printf ("%s", "Enter The grade of the student: ");   // we have to make first value input before the while loop as the grade variable already have garbage value and it may not equal to -1 so it will enter the while loop and we cant perform the if how ever we have the sentinal value
	scanf ("%d", &grade);   //assign the input to grade

	while (grade != -1) {    //enter the while loop if the grade does not equal to -1
		printf ("%s", "Enter The grade of the student: ");  //Prompt
		scanf ("%d", &grade);
		sum = sum + grade;   //add the grade to sum
		counter = counter + 1;  //increase counter for average
	}

	if (counter != 0) {   // to avoid the logic fatal error at the run time, we can not divide on zero so we will make protection for our program if we didnot enter the while loop counter equal to zero so it will tell us to enter the new value
		average = (float) sum / counter;  // Explicit casting (float) as there must be at least two variable float in the line to have float result
		printf ("The Average is %.2f", average);  //print  the float result
	}

	else {
		printf ("\nThere is not any Entered Grades");  //the counter not equal to zero
	}

	return 0;
}

