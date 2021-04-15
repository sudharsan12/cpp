// friend function


// friend function not member function class
// defined outside of the class scope
// not symetric (if B is friend of A,A is not a friend of B)
//
// declaration---->friend return_type function(arg)
//

#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public: 
	void put_data()
	{
		x=100;
		y=200;
	}
	void get_data()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	friend void outsidefun(A &);
};

void outsidefun(A &obj)
{
	cout<<"x="<<obj.x<<endl;
	cout<<"y="<<obj.y<<endl;
	obj.x=10;
	obj.y=20;
}

int main()
{
	A obj;
	obj.put_data();
	cout<<"in class get the data..."<<endl;
	obj.get_data();
	cout<<"in  outside class the data..."<<endl;
	outsidefun(obj);
	cout<<"in class get the data..."<<endl;
	obj.get_data();
}




