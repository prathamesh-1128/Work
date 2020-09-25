/*


Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.

Input : N : 6

	NO: 66

Elements : 85 66 3 66 93 88

Output : 3


Input : N : 6

	NO: 93

Elements : 85 66 3 66 93 88

Output : 4


Input : N : 6

	NO: 12

Elements : 85 11 3 15 11 111

Output : -1
*/

using namespace std;

#include<iostream>


class Hello
   { 
    public:
	    int iCnt=0;
     public:
	     int LastOccurrence(int arr[],int iSize,int iNo)
	{
	   for(iCnt=iSize-1;iCnt<iSize;iCnt--)
		{
		   if(arr[iCnt]==iNo)
			{
			  break;
			}
			
 		   if(iCnt==-1)
			{
			  return -1;
			}
		   
		   }
	   return iCnt;
	}
    };


int main()
{
  int iNum=0;

  int *ptr=0;                 //Pointer

  int iNo=0;

  int iRet=0;
 
  cout<<"Enter the Value of N"<<"\n";
  
  cin>>iNum;

  ptr=new int[iNum];         //Dynamic Memory allocation in C++

  if(ptr==NULL)
    {
	cout<<"Error: Memory is not allocated"<<"\n";  

        return -1;          //Undesired Termination
    }

  cout<<"Enter the Elements"<<"\n";

  for(int iCnt=0;iCnt<iNum;iCnt++)
     {
	cin>>ptr[iCnt];
     }

  cout<<"Enter the Number you want to Search"<<"\n";

  cin>>iNo;

  Hello hobj;

  iRet=hobj.LastOccurrence(ptr,iNum,iNo);

  if(iRet==-1)
   {
      cout<<"Number is not in list"<<"\n";
   }

  else
     {
	cout<<"Index of last occurrence"<<"\n"<<iRet;
     }

  delete []ptr;

  return 0;                //Successful Termination 
 
 }