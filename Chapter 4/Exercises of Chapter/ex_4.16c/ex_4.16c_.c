#include <stdio.h>

int main (void)
{
    unsigned int increment;
    unsigned int decrement;
    unsigned int row;
    unsigned int column;
    unsigned int space;

    decrement = 10;
    increment = 0;

    for (column = 1; column <= 10; ++column){

        for (space = 1; space <= increment; ++space){
            printf (" ");
        }
        for (row = 1;row <= decrement;++row){
            printf ("*");
        }

        puts ("");
        ++increment;
        --decrement;
    }


}
