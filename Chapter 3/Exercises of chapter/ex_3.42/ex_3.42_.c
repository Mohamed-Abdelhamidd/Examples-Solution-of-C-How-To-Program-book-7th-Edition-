//ex_3.42: rewrite the correct solution

#include <stdio.h>

int main (void)
{
	  int x = 1, y = 3;
	  printf ("%d", (++x + y)); //increment operators are unary variable operators so we can not type it with expression ++(x + y)

	  return 0;
}
