//....in cpp dynamic memory alloction using  new--> for memory allocation, delete---> for deallocation 
//of memory new & delete are operasors
//..........syntax ..........
// int *p;
// p=new int or int *p=new int ----->equal to (int*)malloc(sizeof(int))
// to  int *p=new int(100)---> reserved single block of memory and initalize  100 the value
//
// to create contgious memory loaction int *p=new int[100]--->int *p=(int*)calloc(100,sizeof(int)) 
// it will create 4bytes of contgious memory loaction
//
//DELETE--->when it can be destroyed  allocted variable
//ex:int *p=new int(100)--->delete p;  
//ex:int *p=new int[100]---->delete[]p1;-->contigious memory location erase 

#include<iostream>
using namespace std;
int main()
{
	int *p=new int(10);
	int *q=new int[5];
	
	cout<<*p<<endl;
	for (int i=0;i<5;i++)
	{
		*(q+i)=i+1;
	}
	for (int i=0;i<5;i++)
	{
		cout<<*(q+i)<<endl;
	}

	delete p;
	delete[] q;

	cout<<*p<<endl;
	cout<<*q<<endl;
	
}






