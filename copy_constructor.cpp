// copy constructor
//
// A copy constructor is used to declare and initalize an object from another object 
//  the process of initalizing through  a copy constructor is known as copy constructor
//  the reference variable has beed used an argment to the copy constructor
//  we cannot pass the arument by value to  a copy constructor 
// ex: A(A&)-----> it must a referenced
// {
// }

// NOTE: the copy constructor provide by the compiler will be droped if programmer is defining own constructor 

#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public: A(int a,int b)
	{
		cout<<"the enter the values..."<<endl;
		x=a;
		y=b;
	}
	void display()
	{
		cout<<"display the data..."<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int main()
{
	A obj(10,20),obj2(obj);
	obj.display();
	obj2.display();
}

