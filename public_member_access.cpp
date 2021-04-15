// how to access class public datamembers in outside the class
//
//
//when ever class public access member access permission is allowed but the access function defintly declare
//class object on the calling function
//

#include<iostream>
using namespace std;
class A
{
	public :
		int x;
		char name[10];

		void set_data()
		{
			x=100;
		}
};
class B
{
	public :
		int x;
		char name[10];

		void set_data()
		{
			x=100;
		}
};
//                               ------------->default argument                                 
//                        	|
void outsidefun(A obj,B obj2 ,int a=10)
{
	cout<<"In outside function definition...."<<endl;
	cout<<"x="<<obj.x<<endl;
	cout<<"x2="<<obj2.x<<endl;
	cout<<"a="<<a<<endl;
}
int main()
{
	A obj;
	B obj2;
	obj.set_data();
	obj2.set_data();
	outsidefun(obj,obj2);
}













