// pass all argument to the derived class parameterized constructor
// from their pass to the base class parameterized constructor
#include<iostream>
using namespace std;
class A
{
	int x;
public:A(int a)
       {
	       cout<<"base class constructor.."<<endl;
	       x=a;
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
	public:B(int a,int b):A(b) 
       {
	       cout<<"derived class constructor.."<<endl;
	       y=a;
       }
       void display()
       {
	       cout<<"derived class data.."<<endl;
	       cout<<"y="<<y<<endl;
       }
};
int main()
{
	B b(100,200);
	b.A::display();
	b.display();
}

