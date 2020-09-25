/*

Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
*/
using namespace std;

#include<iostream>

class Difference
{
public:
	int Diff(int array[], int iNo)
	  {
	    int iMax=array[0];

	    int iMin=array[iNo-1];

 	    int iCnt=0;

	    for(iCnt=1;iCnt<=iNo-2;iCnt++)
	      {
		if(array[iCnt]>iMax)
		  {
		    iMax=array[iCnt];
	  	   }
		
		}
	      
	    for(iCnt=0;iCnt<iNo-2;iCnt++)
	      {
		if((array[iCnt]<iMin))
		  {
		    iMin=array[iCnt];
		  }
	      }

	  return (iMax-iMin);
	  }
};

int main()
{
  int iNo=0;

  int *ptr=NULL;

  int iRet=0;

  int iCnt=0;

  cout<<"Enter the Value of N";

  cin>>iNo;

  ptr=new int[iNo];

  if(ptr==NULL)
    {
      cout<<"Error:Memory is not allocated";
    }

  cout<<"Enter Elements of array:";

  for(iCnt=0;iCnt<iNo;iCnt++)
    {
	cin>>ptr[iCnt];
     }


  Difference dboj;

  iRet=dboj.Diff(ptr,iNo);

  cout<<"Difference between largest and Smallest number is:"<<iRet;

  delete [] ptr;

return 0;
}