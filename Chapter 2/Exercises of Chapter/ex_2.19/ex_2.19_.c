// Ex 2.19: program to calculate sum, product, difference, largest, smallest

#include <stdio.h>   // preprocessor directive for standard library to perform text replacement

int main (void)   // main function where the program begins to be executed
{
    int num1, num2, num3;
    int sum, average, product;
    int smallest, largest;

    printf ("Enter three Different Integers: "); //prompt
    scanf ("%d%d%d", &num1, &num2, &num3);  //take the values from the user

    sum = num1 + num2 + num3 ;
    product = num1 * num2 * num3 ;
    average = (num1 + num2 + num3)/3 ;
    largest = num1;   //giving to number 1 before comparison
    smallest = num1;  //giving to number 1 before comparison

    if (num2 > largest){
    	largest = num2;
    }
    if (num3 > largest){
    	largest = num3;
    }
    if (smallest > num2){
    	smallest = num2;
    }
    if (smallest > num3){
    	smallest = num3;
    }

    printf ("\n");

    printf ("Sum is %d\n", sum);
    printf ("Product is %d\n", product);
    printf ("Average is %d\n", average);
    printf ("Smallest is %d\n", smallest);
    printf ("Largest is %d\n", largest);

    return 0;
} //end of main
