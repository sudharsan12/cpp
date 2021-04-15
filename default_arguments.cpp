//....default arguments function......
//
//when one are more arguments  are omitted the function
//defined to take default values for omitted argument by
//providing the default values in the function these are supplied for compiler
//when they are not specified by the programme explicitly
//when the function parameter is missing the  compiler subsitutes the default parameter in the place
//the defalut argument must be known to the compiler prior to the invocation of a function it reduce the burden of passing arguments
//explicitly 


//NOTE :if the programmer is providing the enough number of arguments the defult arguments not  by the compiler
//and the default vales provide always from right to left  ex) int add( int a,int b,int c=10)

/* ...........the ambigous program..........
#include<iostream>
using namespace std;

int add(int ,int);
int add(int ,int ,int=30);

int main()
{
	int a=10,b=20;
	int result=add(a,b);
	cout<<"the result1 is"<<result<<endl;
	
	result=add(a,b);
	cout<<"the result2 is"<<result<<endl;
}
int add(int l,int m)
{
	int c=l+m;
	return c;
}
int add(int l,int m,int n)
{
	int c=l+m;
	return c;
}

*/

//this programe compiler error because both are same declaration
/*
#include<iostream>
using namespace std;

void  print(int);
void print(int &);

int main()
{
	int a=10;
	print(a);
}
void print(int a)
{
	cout<<a<<endl;
}
void print(int &a)
{
	cout<<a<<endl;
	
}
*/


//..........

#include<iostream>
using namespace std;

int add(int ,int ,int=30);

int main()
{
	int a=10,b=20;
	int result=add(a,b);
	cout<<"the result1 is "<<result<<endl;
	
}
int add(int l,int m,int n)
{
	int c=l+m+n;
	return c;
}

