// static data member function 
//
//static member function of class only acess only static data member
//static member function possible to invoke by using class object and also possible by using class 
//name with scope resolution opertor
//
// A::get();--->only the static member function this way to access is possible 
#include<iostream>
using namespace std;
class A
{
	static int x;
	int y;
public: void put_data()
	{
		x=10;
		y=20;
	}
	static void get_data()
	{
		cout<<"x="<<x<<endl;
	//	cout<<"y="<<y<<endl;--> this invalid because static function only access static data only 
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int A::x;

int main()
{
	A obj;
	obj.put_data();
	cout<<"the static function..."<<endl;
	A::get_data();
	cout<<"this ordinary function..."<<endl;
	obj.display();
}
		



