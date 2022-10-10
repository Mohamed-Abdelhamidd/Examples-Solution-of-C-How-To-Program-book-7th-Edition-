//Ex 3.33: Hollow sqaure of the asterisks

#include <stdio.h>

//main function where the program begins to start
int main (void)
{
	unsigned int side;		//store size of the square
	unsigned int length = 1;	// column
	unsigned int width;	// rows

	printf ("Enter the side: ");
	scanf ("%u", &side);

	while (length <= side){

		width = 1;	//reset the width position

        if (length == 1){	//first width line

        	//complete full line with asterisks
        	while (width <= side){ //make it full by asterisks
            	printf ("*");
            	++width;
            } //end of the row loop
        }//end of the first row selection statement

        //if width is last
        else if (length == side){

        	//complete asterisks line
        	while (width <= side){
        		printf ("*");
        		++width;
            } //end of the row loop
        }  //end of else if of the last row

        //if not first or the last line in the square make hollow
        else {

        	// loop of asterisks for the width
	    	while (width <= side){

	    		// if first length at the length
	    		if (width == 1){
			    	printf ("*");
		    	}

	    		// if last length at the length
	    		else if (width == side){
			        printf ("*");
		    	}

	    		// if not first or last column of the width line make empty to appear hollow
	    		else{
			        printf (" ");
		        }

			++width; //increment next asterisk at the width till side
	    	}// end of width loop
        } //end of else of the middle rows

		puts(""); //next new line
		++length;
	}

	return 0;
}

