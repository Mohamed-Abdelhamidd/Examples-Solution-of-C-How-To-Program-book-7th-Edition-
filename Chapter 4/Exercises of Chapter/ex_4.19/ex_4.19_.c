//ex4.19: claculating sales

#include <stdio.h>

int main (void){

	unsigned int product;
	unsigned int quantity;
	float sum1, sum2, sum3, sum4, sum5;

	sum1 = sum2 = sum3 = sum4 = sum5 = 0; //initialize the variables with zero

	puts ("Sales Calculator");

	printf ("Enter the product (-1 to end): ");	//avoid garbage value
	scanf ("%u", &product);

	while (product != -1){

		printf ("Enter the quantity: ");
		scanf ("%u", &quantity);

		switch (product){

		//product number 1
		case 1:
			sum1 += 2.98 * quantity;	//sum1 = sum1 + 2.98 * quantity
			break;

		//product number 2
		case 2:
			sum2 += 4.50 * quantity;	//sum2 = sum2 + 4.50 * quantity;
			break;

		//product number 3
		case 3:
			sum3 += 9.98 * quantity;	// sum3 = sum3 + 9.98 * quantity;
			break;

    	//product number 4
		case 4:
			sum4 += 4.49 * quantity;	// sum4 = sum4 + 4.49 * quantity;
			break;

		//product number 5
		case 5:
			sum5 += 6.87 * quantity;	// sum5 = sum5 + 6.87 * quantity;
			break;

		default:
			puts ("Invalid category please try again ");

		}

		puts ("");

		printf ("Enter the product (-1 to end): ");
		scanf ("%u", &product);

	}

	puts ("");

	printf ("the total of product 1 is %.2f\n", sum1);
	printf ("the total of product 2 is %.2f\n", sum2);
	printf ("the total of product 3 is %.2f\n", sum3);
	printf ("the total of product 4 is %.2f\n", sum4);
	printf ("the total of product 5 is %.2f\n", sum5);
	printf ("the total of all = %.2f", sum1 + sum2 + sum3 + sum4 + sum5);

}
