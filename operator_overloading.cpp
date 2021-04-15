//operator overloading 
//
//providing extra meaning to the existing operator without changing the meaning of the operator
//
//two ways to implement the operator overloading 
//1) implement on the function
//2) implement on the friend function
//
// return_type operator @(argument_list);
//
//unary operator overloading
//-,+,*
/*
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public : A()
	 {
		 x=100;
		 y=200;
	 }
	 void display()
	 {
		 cout<<"x="<<x<<endl;
		 cout<<"y="<<y<<endl;
	 }
	 void operator -()
	 {
		 x=-x;
		 y=-y;
	 }
};
int main()
{
	A a;
	a.display();
	-a;//----> equal to a.operator -();
	a.display();
}
*/
// friend function using unary operator overloding

	
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public : A()
	 {
		 x=100;
		 y=200;
	 }
	 void display()
	 {
		 cout<<"x="<<x<<endl;
		 cout<<"y="<<y<<endl;
	 }

	 friend void operator ++(A&);
};
	 void operator ++(A &obj)
	 {
		 obj.x=++obj.x;
		 obj.y=++obj.y;
	 }

int main()
{
	A a;
	a.display();
	++a;//----> equal to a.operator -();
	a.display();
}
