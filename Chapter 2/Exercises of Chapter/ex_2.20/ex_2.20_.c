// Ex_2.20: scan the diameter and calculate Area, Circumference

#include <stdio.h>

int main (void)
{
   int diameter, area, circumference;

   printf ("Enter Diameter: ");
   scanf ("%d", &diameter);

   area = 3.14 * diameter * diameter ;
   circumference = 2 * 3.14 * diameter ;

   printf ("\n");

   printf ("Area is %d\n", area);
   printf ("Circumference is %d\n", circumference);

   return 0;
}

