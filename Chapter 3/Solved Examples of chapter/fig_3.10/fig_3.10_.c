//Write a program that helps to enter results of the 10 students who passed licsence of the exam and show the number of passed students and faild students if more than 8 students passed give a bonus for the instructor

#include<stdio.h>

int main (void)
{
	unsigned int passedStudentsnumber ;
	unsigned int failedStudentsNumber ;
	unsigned int studentsNumber;
	int result ;

	passedStudentsnumber = 0 ;
    failedStudentsNumber = 0 ;
    studentsNumber = 1;

    while (studentsNumber != 11){
    	printf ("Enter Result of the student (%d): ", studentsNumber);
    	scanf ("%d", &result);

    	if (result == 1){
   			passedStudentsnumber = passedStudentsnumber + 1;
   		}
    	else{
    		failedStudentsNumber = failedStudentsNumber + 1;
   		}

    	studentsNumber = studentsNumber + 1;
    }

    printf ("Number of passed students is %u\nNumber of faild students is %u \n" ,passedStudentsnumber, failedStudentsNumber);

    if (passedStudentsnumber >= 8){
    	puts ("Bonus to the instructor");
    }

    return 0;
}


