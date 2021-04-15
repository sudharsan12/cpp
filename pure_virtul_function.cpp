// pure virtual function
//  an unimplemented function by using pure virtual function
// A pure virtual function is a function declared in the  base class but has no definition
// 
// syntax: virtual return_type function_name()=0;
//
// abstract class
//
// An abstract class is a class  that is designed to be used as a  base class an abstract class
// contains atleast one pure vrtual function 
//
// feature of pure virtual function
//
// when the base class  uses a pure virtual function each derived class  must over ride  that function failing
// of which a compile time error is generaded
// 
//  there is no definition for the function  cannot create an object of that  class however
//   we can declare pointer to it.
//
#include<iostream>
using namespace std;
class shape
{
	protected: 
		double x,y;
	public:
		void set_dim(double i,double j)
		{
			x=i;
			y=j;
		}
		virtual void show_area()=0;  // pure virtual function
};

class triangle : public shape
{
	public:
		void show_area()
		{
			cout<<"triangle with height"<<endl;
			cout<<x<<" and base"<<y;
			cout<<" has an area ";
			cout<<x*0.5*y<<endl;
		}
};
class rectangle : public shape
{
	public:
		void show_area()
		{
			cout<<"reactangle with height"<<endl;
			cout<<x<<" and base"<<y;
			cout<<" has an area ";
			cout<<x*y<<endl;
		}
};

int main()
{
	shape *p;
	triangle t;
	p=&t;
	p->set_dim(10,5.5);
	p->show_area();
	rectangle r;
	p=&r;
	p->set_dim(10.5,5.5);
	p->show_area();
}

