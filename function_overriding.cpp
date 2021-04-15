// function overriding 
//
// A mechanism of defining a function  with same name and signature in both base class and derived class is known as function over riding
// object which to derived class is known as function over riding. object which to derived class depend on the member function is executed.
//

#include<iostream>
using namespace std;
class A
{
	int x;
public: void set_x()
	{
		x=10;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
	}
};
class B:public A
{
	int y;
public: void set_y()
	{
		y=20;
	}
	void display()
	{
		cout<<"y="<<y<<endl;
	}
};
int main()
{
     A a;
     B b;
     cout<<"the x value data.."<<endl;
     a.set_x();
     a.display();
     cout<<"the y value data.."<<endl;
     b.set_x();
     b.set_y();
     b.display();
     b.A::display();//over riding resolving
}


