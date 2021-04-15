// binary operator overloading
//
// the overloaded operator must have at least one operand that
// is if of user defined type ---> obj+x
//
//
// friend return_type opeartor @(obj,obj);
/*
#include<iostream>
using namespace std;
class complx
{
	float real;
	float img;
public:
	void set_data()
	{
		cout<<"enter the data..."<<endl;
		cin>>real;
		cin>>img;
	}
	void get_data()
	{
		cout<<"real="<<real<<endl;
		cout<<"img="<<img<<endl;
	}
	complx operator +(complx &obj)
	{
		complx temp;
		temp.real=real+obj.real;
		temp.img=img+obj.img;
		return temp;
	}
};
int main()
{
	complx a1,a2,a3;
	a1.set_data();
	a2.set_data();
	a3=a1+a2;  //  a1.operator +(a2);
	cout<<"a3 object data..."<<endl;
	a3.get_data();
}
*/

//using the friend function

#include<iostream>
using namespace std;
class complx
{
	float real;
	float img;
public:
	void set_data()
	{
		cout<<"enter the data..."<<endl;
		cin>>real;
		cin>>img;
	}
	void get_data()
	{
		cout<<"real="<<real<<endl;
		cout<<"img="<<img<<endl;
	}
	friend complx operator +(complx,complx);
};
	complx operator +(complx obj1,complx obj2)
	{
		complx temp;
		temp.real=obj1.real+obj2.real;
		temp.img=obj1.img+obj2.img;
		return temp;
	}
int main()
{
	complx a1,a2,a3;
	a1.set_data();
	a2.set_data();
	a3=a1+a2;  //  a1.operator +(a1,a2);
	cout<<"a3 object data..."<<endl;
	a3.get_data();
}
