// inheritance
//
// inheritance is the on of the important feature of the oop .inheritance method is the by which
// object of one class get the properties of another
//
// advntages
// 1) it save memory space
// 2) it save time
// 3)relabilty of code
// 
//
// ex) 
// class A
// {
//
// }      _________> derived class
//       |
// class B:public A ------> base class
// {
//
// } 
//
// Access        |       public  |      protected  |    private |
//               |               |                 |            |
// same class    |       yes     |         yes     |     yes    |
//               |               |                 |            |
// derived class |       yes     |         yes     |     no     |
//               |               |                 |            |
//outside class  |       yes     |         no      |     no     |
//
//
//..........type:-1 inherits as private........
//
//      base                    derived
//      private    -----------> inacessible
//      protected  -----------> private member
//      public     -----------> private member
//

#include<iostream>
class A
{
	private:int x;
	protected: int y;
	public :int z;
};
class B:private A
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



	
