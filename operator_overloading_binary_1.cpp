// binary operator overloading
//
// the overloaded operator must have at least one operand that
// is if of user defined type ---> obj+x
//
//
// friend return_type opeartor @(obj,obj);


// c3=c1+100+c2
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
	complx operator +(int val)
	{
		
		real=real+val;
		img=img+val;
		return *this;
	}
	complx operator +(complx &obj)
	{
		real=real+obj.real;
		img=img+obj.img;
		return *this;

	}
};
int main()
{
	complx c1,c2,c3;
	c1.set_data();
	c2.set_data();
	c3=c1+100;  //  c1.operator +(100);
        c3=c3+c2;  // c3.operator +(c2)
	cout<<"a3 object data..."<<endl;
	c3.get_data();
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
	friend complx operator +(complx &,int val);
	friend complx operator +(complx &,complx &);
};

	complx operator +(complx &obj,int val)
	{
	        complx temp;	
		temp.real=obj.real+val;
		temp.img=obj.img+val;
		return temp;
	}
	complx operator +(complx &obj1,complx &obj2)
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
	a3=a1+100;  //  a1.operator +(100);
	a3=a3+a2;//    a3.operator +(a2);
	cout<<"a3 object data..."<<endl;
	a3.get_data();
}

