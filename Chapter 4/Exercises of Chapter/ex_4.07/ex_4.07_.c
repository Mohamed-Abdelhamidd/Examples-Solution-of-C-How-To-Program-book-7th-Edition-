//ex 4.07: write the for statement which prints the following

#include <stdio.h>

int main (void){
	int count;

	printf("a) ");  //the solution for the first question
	for (count = 1; count <= 7; ++count){
		if (count == 7)
			printf("%d \n", count);

		else
			printf("%d, ", count);
	}

	printf("b) ");	//the solution for the second question

	for (count = 3; count <= 23; count+=5){
		if (count == 23)
			printf("%d \n", count);

		else
			printf("%d, ", count);
	}

	printf("c) ");	//the solution for the third question

	for (count = 20; count >= -10; count-=6){
		if (count == -10)
			printf("%d \n", count);

		else
			printf("%d, ", count);
	}

	printf("D) ");	//the solution for the fourth question

	for (count = 19; count <= 51; count+=8){
		if (count == 51)
			printf("%d \n", count);

		else
			printf("%d, ", count);
	}

	return 0;
}
