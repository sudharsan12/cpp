
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public: A(int a,int b)
	{
		cout<<"parameterized constructor.."<<endl;
		x=a;
		y=b;
	}
	A()
	{
		cout<<"default constructor...."<<endl;
		x=0;
		y=0;
	}
	A(A &obj)
	{
		cout<<"copy constructor..."<<endl;
		x=obj.x;
		y=obj.y;

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
	A obj(10,20),obj2(obj),obj3;
	obj.display();
	obj2.display();
	obj3.display();
}
