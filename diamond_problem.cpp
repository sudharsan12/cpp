// diamound problem
//
// the problem appered on the multipath inheritance  because the base class access unable to take decision which path is select (ambigous) prolem is called the
// diamound problem
//
// note: solution to the problem is declaring base class as virtual this meam only for one only
//

#include<iostream>
using namespace std;
class A
{
	public: int x;
};
class B: virtual public A
{
	public: int y;
};
class C: virtual public A
{
	public: int z;
};
class D:public B,public C
{
	public: int p;
};
int main()
{
	D d;
	d.p=100;
	d.z=100;
	d.y=100;
	d.x=100;// this is diamound problem
}
	
