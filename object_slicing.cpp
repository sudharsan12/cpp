// object slicing
//
// when derived class object assigned to base class object
// nly the member which are inherited from the base class to
// derived class are assigned  to base class object derived 
// class spcefic member are slice off the mechanism is called
// slicing
//



#include<iostream>
using namespace std;
class A
{
	public:int x;
	       int y;
	       int z;
};
class B:public A
{
	public :int m;
};
int main()
{
	A a;
	B b;
	a.x=10;
	a.y=20;
	a.z=30;
	b.x=100;
	b.y=200;
	b.z=300;
	b.m=50;
	cout<<"a.x="<<a.x<<" a.y="<<a.y<<" a.z="<<a.z<<endl;
	cout<<"b.x="<<b.x<<" b.y="<<b.y<<" b.z="<<b.z<<" b.m="<<b.m<<endl;
	a=b;
	cout<<"a.x="<<a.x<<" a.y="<<a.y<<" a.z="<<a.z<<endl;
	cout<<"b.x="<<b.x<<" b.y="<<b.y<<" b.z="<<b.z<<" b.m="<<b.m<<endl;
}
