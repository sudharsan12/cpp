
// static data members


// in a class if there are static data members they are common for all objects belongs to that class 
// which means modification of on object will asset the other object
//                             _______________
//                            |       x       |
//                            |       y       |
//                            |    set()      |
//                            |    get()      |
//                             _______________
//                                   |
//                                   |
//                     ------------------------------
//          -----------| a1                  ____ a2|
//          |           v                    |      v
//          |       -------                  |   --------
//          |      | y=20 |                  |   | y=garb|
//          |      |      |                  |   |age    |
//          |       ------                   |    -------
//          |                                |
//          |           ------------         |
//          |-----------|   x=10   |_________|
//                      |__________| \
//                                    \
//                                     \
//                                      v
//
//                                      static
/*
 * Note:static member of class are not include sizeof object because static data member are not belongs to
 * any specfic object they are common for all object there is only one copy created for static data member for all object
 for static members memory is not created when object is created
 int A::x; (or) int A::x=10;  -----> this denoted x is not belongs to any specfic object,this belongs to all object
 */

#include<iostream>
using namespace std;

class A
{
	static int x;
	int y;
	public:
	void set()
	{
		cout<<"enter the data.."<<endl;
		cin>>x;
		cin>>y;
	}
	void get()
	{
		cout<<" the data of"<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int A::x;  // declare variable

int main()
{
	A a1,a2;
	cout<<"a1 object data..."<<endl;
	a1.set();
	a1.get();
	cout<<"a2 object data..."<<endl;
	a2.set();
	a2.get();
	cout<<"after enter the a2 data check a1 "<<endl;
	a1.get();
}



