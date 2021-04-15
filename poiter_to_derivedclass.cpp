//  pointer to derived class
//
//  A pointer declare as a pointer to base class can also be used to point to any class
//  dderived from that base .
//  however only those members of the derived object that were inherited rom the 
//  base can be accessed.   

#include<iostream>
using namespace std;
/*
class A
{
	public:
		void display()
		{
			cout<<"base calss displayfunction...."<<endl;
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"derived class display function..."<<endl;
		}
};
int main()
{
	A *p;
	B b;
	p=&b;
	p->display();

}// result: base class displayfunction

//NOTE: in case of p->display() function call in above program resolved at 
//compile time based on the pointer type compiler not considering  the pointer pointing to which object address
//compiler is consider pointer belongs to which class
//
*/

class A
{
	public:
		void show()
		{
			cout<<"base calss displayfunction...."<<endl;
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"derived class display function..."<<endl;
		}
};
int main()
{
	A *p;
	B b;
	p=&b;
	p->display();// compiler error
	//because display() not a member function of base class

}// result: base class displayfunction
