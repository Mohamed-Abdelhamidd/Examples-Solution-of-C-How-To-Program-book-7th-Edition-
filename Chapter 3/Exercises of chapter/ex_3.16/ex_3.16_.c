// Ex 3.16:(Gas mileage) Make a program to calculate the gas consumed per gallon at each tankful and determine the overall averages

#include <stdio.h>

int main (void)
{
	// Declaration of variables used
	float gallons;
	unsigned int miles;
	float average;
	float totalGallons;
	unsigned int totalMiles;
	float overallAverage;

	//Initialization for sum variables used, as they must start with zero
	totalGallons = 0;
	totalMiles = 0;

	//get first value of the variable gallon to control the while loop to either enter or terminate
	printf_s ("Enter the gallons used (-1 to end): ");
	scanf_s ("%f", &gallons);

	while (gallons != -1){
		printf_s ("Enter the Miles driven: "); //Prompt
		scanf_s ("%d", &miles);

		totalGallons += gallons;
		totalMiles += miles;
		average = miles / gallons;
		printf_s ("the miles / gallon for this tank was: %f\n", average);

		printf_s ("Enter the gallons used (-1 to end): "); //very important note ---> we ordered the scanfs as this way as the last statement at the repetition the while condition will check on so the program will not be forced to perform any other statement before checking
		scanf_s ("%f", &gallons);
	}

	// printing the Overall consumptions
	overallAverage = totalMiles / totalGallons;
	printf_s ("\nThe overall average Miles/Gallon was %f\n", overallAverage);

	return 0;
}


