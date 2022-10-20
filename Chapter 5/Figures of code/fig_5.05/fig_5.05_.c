//fig5.05: demonstrating function a=call stack
//and stack frames using function square

#include <stdio.h>

int square (int x);	//function prototype before main function

int main (void)	//main function also has a stack frame stored at it the automatic variables and address to return to the operating system the results
{

	int a = 10;

	printf ("the square of %d is %d", a , square (a));	//the function calling has a generated stack frame to help the called function to back to the main function at returns stage (pushing onto the stack)

}

int square (int x){	//the function definition

	return x * x;	//return to main function using the address stored in stack to the calling function (poping from the stack)
}
