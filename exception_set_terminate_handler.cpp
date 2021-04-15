// set_terminate function 
//
//  a terminate handler function is a function abnormally when exception hadling  process has to be abanded forsome 
//  reason. thsi happens when no exception  or for some reason exceptional circumstance that make impossible to continue the exception
//
#include<iostream>
using namespace std;
void fun()
	{
		throw 100;
	}
void my_exception()
	{
		cout<<"unhndled exception caught.."<<endl;
		exit(0);
	}
int main()
{
	set_terminate(my_exception);
	try{
		fun();
	}
	catch(const char *p)
	{
		cout<<"catch bolck.."<<endl;
	}
}
