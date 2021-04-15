// virtual destructor 
//
// inn the below program when using delete p only base class
// destrutor is executing not derived class destructor 
// hence it leads to memory leak to solve this proplem declare base class destructor as virtual 
//
//
// without virtual_destructor

/*
#include<iostream>
using namespace std;
class A
{
	int x;
public: A()
	{
		cout<<"base class constructor"<<endl;
		x=100;
	}
	~A()
	{
		cout<<"base class destrutor"<<endl;
	}
};
class B:public A
{
	int y;
public: B()
	{
		cout<<"derived class constructor"<<endl;
		y=100;
	}
	~B()
	{
		cout<<"derived class destrutor"<<endl;
	}
};
int main()
{
	A *p=new B;
	delete p;
	while(1);
}

result 
base class constructor
derived clss constructor
base class destructor

*/
//  with virtual desrutor 
#include<iostream>
using namespace std;
class A
{
	int x;
public: A()
	{
		cout<<"base class constructor"<<endl;
		x=100;
	}
	virtual ~A()
	{
		cout<<"base class destrutor"<<endl;
	}
};
class B:public A
{
	int y;
public: B()
	{
		cout<<"derived class constructor"<<endl;
		y=100;
	}
	~B()
	{
		cout<<"derived class destrutor"<<endl;
	}
};
int main()
{
	A *p=new B;
	delete p;
	while(1);
}
//result

//base class constructor
//derived clss constructor
//derived class destructor
//base class destructor
