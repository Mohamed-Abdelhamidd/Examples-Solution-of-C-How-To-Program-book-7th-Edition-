// Ex 3.17: (Credit Limit Calculator) develop a C program that will determine if the department store

#include <stdio.h> //Directive preprocessor

int main (void) //the main function where the function begins to execute
{
	unsigned int customerNomber;
	float beginningBalance;
	float totalCharges;
	float totalCredits;
	float creditLimit;
	float balance;

	printf_s ("Enter account number (-1 to end): "); //Prompt
	scanf_s ("%d", &customerNomber); //get initial value of the customer number as the variable at memory allocation contains a garbage value and that will lead to enter the while loop

	while (customerNomber != -1){
		printf_s ("Enter beginning balance: ");
		scanf_s ("%f", &beginningBalance);
		printf_s ("Enter Total Charges: ");
		scanf_s ("%f", &totalCharges);
		printf_s ("Enter Total Credits: ");
		scanf_s ("%f", &totalCredits);
		printf_s ("Enter Credit Limit: ");
		scanf_s ("%f", &creditLimit);

		balance = beginningBalance + totalCharges - totalCredits;

		if (balance > creditLimit){
			printf_s ("Account:\t  %d\n",customerNomber);
			printf_s ("Credit Limit: %.2f\n",totalCredits);
			printf_s ("Balance:\t  %.2f\n",balance);
			puts ("Credit Limit Exceeded");
		} //end of if

		printf_s ("\nEnter account number (-1 to end): "); //Prompt
		scanf_s ("%d", &customerNomber);
	} //end of while
}//end of main

