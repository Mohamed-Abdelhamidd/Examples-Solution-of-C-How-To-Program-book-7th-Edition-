
//Ex. 2.16 Write a program that asks the user to enter two variables and perform on them arithmetic operations

#include <stdio.h>

int main (void)	// main function where the program starts to execute
{
   int integer1, integer2;

   printf("please enter two Variables: ");

   scanf("%d%d", &integer1, &integer2);  //store the values at the memory location named

   printf ("the difference is %d \n", integer1-integer2);
   printf ("The product is %d\n", integer1*integer2);
   printf ("The sum is %d\n", integer1+integer2);
   printf ("The quotient is %d", integer1/integer2);

   return 0;
} // end of the program

