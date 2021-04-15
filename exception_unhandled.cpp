//nhandled exception
//
//in above programme throw and catch block argument are not identical it leads to the abnormal program
//
#include<iostream>
using namespace std;
int main()
{

	try
	{
	
			throw 100;
	}
	catch(const char *p) // unhandled exception
	{
		cout<<"this is string.."<<endl;
		cout<<p<<endl;
	}
}

