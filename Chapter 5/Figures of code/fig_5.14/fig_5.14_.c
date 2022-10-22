//fig5.14: A game of chance

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumeration constants represent the game status
enum status { CONTINUE, WON, LOST};

int rollDice (void); // function prototype

int main (void){

	int sum;	//sum of rolled dice
	int mypoint;	//player must make this point to win
	enum status gameStatus;	//can contain constants of enum

	// randomizing random number by generating sequences using time
	srand ( time( NULL ));

	sum = rollDice ();	//roll the dice

	switch (sum){

	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		mypoint = sum;
		printf ("point is %d\n", mypoint);
		break;
	}

	while ( CONTINUE == gameStatus){
		sum = rollDice();

		if (sum == mypoint){
			gameStatus = WON;
		}
		else {
			if (7 == sum){
				gameStatus = LOST;
			}
		}
	}

	if (WON == gameStatus){
		puts ("Player WON");
	}
	else{
		puts ("Player Loses");
	}
}

// function of the random numbers
int rollDice (void){

	int die1;
	int die2;
	int workSum;

	die1 = 1 + rand()%6;
	die2 = 1 + rand()%6;

	workSum = die1 + die2;

	printf ("Player rolled %d + %d = %d\n", die1 ,die2, workSum);

	return workSum;
}
