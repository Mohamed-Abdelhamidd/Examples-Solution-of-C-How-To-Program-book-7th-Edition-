//Ex 3.7: Calculate X raised to the y power  --->  x^y = x*x*x*x*x*x*.....

#include <stdio.h>

int main (void)
{
	//declare variables with unsigned as they doesn't contain negative number
	unsigned int x;
	unsigned int y;
	unsigned int powerResult;
	unsigned int i;

	//initialize power to 1 to avoid having wrong in calculation, i is the counter
	powerResult = 1;
	i = 1;

	printf_s("%s","Enter the number: ");	//Prompt
	scanf_s("%u", &x);		//get the number value
	printf_s("s","Enter the power value: ");	//Prompt
	scanf_s("%u",&y);		//get the power value

	while (i <= y){		//the counter must not pass the multiplication repetition times
		powerResult *= x;	// is same as powerResult = powerResult * x  ---> powerResult = 1 * 2 ---> powerResult = 2 * 2 ---> powerResult = 2 * 4 ---> powerResult = 2*8
		i++;	// the same as i = i + 1 or i += 1
	}

	printf_s ("The power is %d\n", powerResult);   //print Result

	return 0;
}
