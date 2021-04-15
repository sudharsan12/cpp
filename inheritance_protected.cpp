
//..........type:-1 inherits as protected........
//
//      base                    derived
//      private    -----------> inacessible
//      protected  -----------> protected member
//      public     -----------> protected member
//

#include<iostream>
class A
{
	private:int x;
	protected: int y;
	public :int z;
};
class B:protected A
{
	private:int a;
	protected: int b;
	public :int c;
};
int main()
{
	A a;
	B b;
//	a.x=100; // not valid
//	a.y=100; // not valid
	a.z=100; // valid
//	b.x=100; //not valid
	b.c=100; // valid
}
