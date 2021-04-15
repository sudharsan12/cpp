// [] operator overloading using the exception handling

#include<iostream>
using namespace std;
class A
{
	int a[5];
public: A()
	{
		int i;
		for(i=0;i<5;i++)
			a[i]=i+10;
	}
	int operator [](int i)
	{

		if(i>=0&&i<5)
		return a[i];
		else
			throw "out of range..";
	}
};

int main()
	{
		A a;
		int i;
		cout<<"enter the value..."<<endl;
	       cin>>i;
	       try{
       cout<<a[i]<<endl;
	       }
	catch(const char *p)
	{
	cout<<"into catch block.."<<endl;
        cout<<p<<endl;
	}
       cout<<"after the catch block..."<<endl;
	}       

