// Ex 2.33: Car-pool Saving Calculator

#include <stdio.h>

int main (void)
{
	int numbeOfPassengers;
	int totalKilosDrivenPerDay;
	int costPerLiter;
	int averageKilosPerLiter;
	int parkingFeesPerDay;
	int youWillPayAlone;
	int litersConsumed;
	int fuelCost;
	int youWillPayAfterPooling;
	int youSaved;

	printf ("Car-pooling Saving calculator\n");

	printf ("\nEnter Number of Tolls including yourself: ");
	scanf ("%d", &numbeOfPassengers);

	printf ("\nEnter Total Number of kilos driven per day: ");
	scanf ("%d", &totalKilosDrivenPerDay);

	printf ("\nEnter Cost per liter: ");
	scanf ("%d", &costPerLiter);

	printf ("\nEnter average of Kilos per Liter: ");
	scanf("%d", &averageKilosPerLiter);

	printf ("\nEnter Parking fees per day: ");
	scanf ("%d", &parkingFeesPerDay);

	litersConsumed = totalKilosDrivenPerDay / averageKilosPerLiter;
	fuelCost = litersConsumed * costPerLiter;
	youWillPayAlone = fuelCost + parkingFeesPerDay;
	youWillPayAfterPooling = (fuelCost + parkingFeesPerDay) / numbeOfPassengers;
	youSaved = youWillPayAlone - youWillPayAfterPooling;

	printf ("\n\nYou will pay Alone: %d Pound\n", youWillPayAlone);
	printf ("After Pooling, you will pay: %d Pound\n", youWillPayAfterPooling);
	printf ("You saved: %d Pound", youSaved);

	return 0;
}
