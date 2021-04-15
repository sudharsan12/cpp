// constructor & destructor inheritnce
//
// constructor & destructor cannot be inheritated because 
//  these are class name specific constructor is created
//
//  NOTE: constructor not be constrct inherited but derived class access base class constructor 
//  access by the derived class
//

#include<iostream>
using namespace std;
class A
{
	int x;
public:A()
       {
	       cout<<"base class constructor.."<<endl;
	       cout<<"enter the x value.."<<endl;
	       cin>>x;
       }
       void display()
       {
	       cout<<"base class data.."<<endl;
	       cout<<"x="<<x<<endl;
       }
};
class B: public A
{
	int y;
	public:B() // here B():A() internally operation
       {
	       cout<<"derived class constructor.."<<endl;
	       cout<<"enter the y value.."<<endl;
	       cin>>y;
       }
       void display()
       {
	       cout<<"derived class data.."<<endl;
	       cout<<"y="<<y<<endl;
       }
};
int main()
{
	A a;
	B b;
	a.display();
	b.display();
}

