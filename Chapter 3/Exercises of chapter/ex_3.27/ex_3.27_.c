// Ex 3.27: Validating user Input without subtracting numbers of loops

#include <stdio.h>

int main (void)
{
	unsigned int fails = 0;		//failure times
	unsigned int sucess = 0;	//success times
	unsigned int counter = 1;	//counter starts with 1
	unsigned int result;		//store the result variable

	// loop with 10 times to get values
	while (counter <= 10){

		printf ("Enter result (passed=1, failure=2): ");
		scanf ("%u", &result);

		//count success number
		if (result == 1){
			++sucess;
		}

		//count fails times
		else if (result == 2){
			++fails;
		}

		//if invalid value decrease the counter to avoid losing the loop on wrong value
		else{
			--counter;
			printf ("Invalid Value please enter the value\n");
		}

		//increment
		++counter;
	}

	printf ("Passed: %u\n", sucess);
	printf ("failed: %u\n", fails);

	if (sucess >= 8){
		printf ("Bonus for the instructor\n");
	}

	return 0;
}

