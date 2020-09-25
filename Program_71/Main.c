/*

Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C

Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void CheckTime(char ch)
{
switch(ch)
{
  case 'A':
	    printf("Exam at 7.30 PM");
	   break;

  case 'a':
	    printf("Exam at 7.30 PM");
	   break;

  case 'B':
	    printf("Exam at 8.30 PM");
	   break;
  

  case 'b':
	    printf("Exam at 8.30 PM");
	   break;

  case 'C':
	    printf("Exam at 9.20 PM");
	   break;


  case 'c':
	    printf("Exam at 9.20 PM");
	   break;


  case 'D':
	    printf("Exam at 10.30 PM");
	   break;


  case 'd':
	    printf("Exam at 7.30 PM");
	   break;

  default:
	printf("Enter Correct division");
         break;
}



}




int main()
{
  char cDiv='\0';

  printf("Enter the Division\n");

  scanf("%c",&cDiv);

  CheckTime(cDiv);





return 0;
}