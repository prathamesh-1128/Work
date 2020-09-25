/*
Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input: N:5 
       No:80
          50 40 61 80 5 2

Output: TRUE


Input: N:4 
       No:40
          50 -40 61 80 5 

Output: FALSE



Input: N:5 
       No:-15
          50 40 61 80 15 2

Output: FALSE

*/
using namespace std;

#include<iostream>

#define TRUE 1

#define FALSE 0

typedef int BOOL;

class Number
  {
	public:
		int iCnt=0;
	public:
		 BOOL SearchNo(int arr[],int iSize,int iNo)
	    {
		for(iCnt=0;iCnt<iSize;iCnt++)
		  {
			if(arr[iCnt]==iNo)
			  {
			    return TRUE;
			  }
			
		   }
			   
			return FALSE;
			    
	     }
	



};

  int main()
      {
	int iNum=0;

	int *ptr=NULL;

	int iCnt=0;

	int iNo=0;

	BOOL bRet=FALSE;

	cout<<"Enter Value of N"<<"\n";

	cin>> iNum;

	ptr=new int[iNum];

	if(ptr==NULL)
	  {
	    cout<<"Error: Memory is not allocated"<<"\n";
	    return -1;
	  }

	cout<<"Enter the elements"<<"\n";
	
	for(iCnt=0;iCnt<iNum;iCnt++)
	  {
	    cin>>ptr[iCnt];
	  }

	cout<<"Enter No"<<"\n";
	
	cin>>iNo;
	
	Number nobj;
	
	bRet=nobj.SearchNo(ptr,iNum,iNo);
	

	 if(bRet==TRUE)
	  {
	    cout<<"Number is Present"<<"\n";
	  }
	
	else
	  {
	    cout<<"Number is Absent"<<"\n";
	  }

	delete(ptr);
return 0;
}