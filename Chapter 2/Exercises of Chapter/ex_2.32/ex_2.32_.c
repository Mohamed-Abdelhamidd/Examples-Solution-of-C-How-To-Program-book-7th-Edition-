//Ex 2.32: Body mass index calculator

#include <stdio.h>

int main (void)
{
	int BMI, weight, height ;

	printf ("Enter weight in kilograms: ");
	scanf ("%d", &weight);

	printf ("\n");

	printf ("Enter height in meters: ");
	scanf ("%d", &height);

	printf ("\n");

	BMI = (weight * 703) / (height * height);

	if (BMI < 18.5){
		printf ("Under weight\n");
	}

	if (BMI > 18.5 && BMI < 24.9){
		printf ("Normal\n");
	}

	if (BMI >= 25 && BMI <= 29.9){
		printf ("Overweight\n");
	}
	if (BMI >= 30){
		printf ("obese\n");
	}

	return 0;
}

