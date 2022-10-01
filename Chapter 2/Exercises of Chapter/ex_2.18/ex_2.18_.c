// Ex: 2.18 take two integers and compare them with the and print larger or equal

#include <stdio.h>   // Preprocessor directive

int main (void)   // main function where the program begins to execute
{
   int num1, num2;

   printf("Enter two numbers: "); //prompt
   scanf("%d%d", &num1, &num2 ); // read numbers stdin
   printf ("\n");

   if (num1 == num2){
	   printf("Both numbers are equal\n");
   }

   if (num1>num2){
	   printf ("%d is greater than %d\n", num1, num2);
   }

   if (num1<num2){
  	   printf ("%d is greater than %d\n", num2, num1);
     }

   return 0;
}// end of the main
