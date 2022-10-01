// Fig 3.5: Class Average Program with Counter-Controlled Repetition

#include <stdio.h>

// Main function where the program begins executing
int main (void)
{
   int grade;
   int total = 0;
   unsigned int counter = 1;
   int average;

   while (counter <= 10){  //while condition if the condition is less than or equal to the 10 students repeat the compound statements
	   printf ("Enter Student (%d) grade: ", counter);  //prompt
	   scanf ("%d", &grade);  // take in the new value of the new student
	   total = total + grade; //  adding the new value into the total
	   counter = counter + 1;  // increase the counter by one to perform the next student
   }

   average = total / 10;

   printf ("\nAverage of the class is %d", average);

   return  0;
} // End of main function


