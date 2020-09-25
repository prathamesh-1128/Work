/*Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.


Input : N : 6

NO: 66

Elements : 85 66 3 66 93 88

Output : 1


Input : N : 5

NO: 46

Elements : 85 66 3 46 93 

Output : 3


Input : N : 4

NO: 6

Elements : 85 66 3 66 

Output : 

*/

using namespace std;
#include<iostream>

class Index
   {
	public:
		int iStart=0,iEnd=0;
	public:
		int DisplayIndex(int arr[],int iSize,int iNo)
	   {
		for(iStart=0,iEnd=iSize-1;iStart<iEnd;iStart++,iEnd--)
		  {
			if((iStart==iEnd) && (arr[iStart]==iNo))
			  {
				break;
			  }

		  }

                                                  
			if(arr[iStart]==iNo)
			  {
				return iStart;
			  }
	
			else if(arr[iEnd]==iNo)
			  {
				return iEnd;
			  }
		else(iStart>iEnd)
		 {
		    return -1;
		 }
		 
	   }
    };

int main()
{
   int iValue=0;

   int *ptr=NULL;

   int iNo=0;

   int iCnt=0;

   int iRet=0;

	cout<<"Enter the value of N"<<"\n";

	cin>>iValue;

	ptr=new int[iValue];

	if(ptr==NULL)
	   {
		cout<<"Error: Memory is not allocated"<<"\n";
	   }

	cout<<"Enter Elements"<<"\n";

	for(iCnt=0;iCnt<iValue;iCnt++)
	  {
		cin>>ptr[iCnt];
	  }

	cout<<"Enter the No"<<"\n";

	cin>>iNo;

	Index iobj;

	iRet=iobj.DisplayIndex(ptr,iValue,iNo);

	if(iRet==-1)
	 {
	   cout<<"There is no such Number"<<"\n";
	 }
	
	else
	 {
	    cout<<"index of first occurrence of Number is:"<<"\n"<<iRet;
	 }

	delete[] ptr;


return 0;
}