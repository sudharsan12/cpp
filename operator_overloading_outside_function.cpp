// there is following operator possible to overloaded only 
// operator function as a friend function
// << (insertion operator)
// >> (extraction operator)
/*
#include<iostream>
using namespace std;
class A
{
	int h;
	char a[20];
public: void get_data()
	{
		cout<<"enter the input..."<<endl;
		cout<<"id= ";
		cin>>h;
		cout<<"name=";
		cin>>a;
	}
	friend ostream& operator <<(ostream &,A &);
};

ostream & operator <<(ostream &obj,A &obj2)
{
	obj<<obj2.h<<endl;
	obj<<obj2.a<<endl;
	return obj;
}

int main()
{
	int k=500;
	A a;
	a.get_data();
	cout<<a<<endl;
	cout<<k<<endl;
}
*/

#include<iostream>
using namespace std;
class A
{
	int id;
	char name[20];
public: void display()
	{
		cout<<"id= "<<id<<endl;
		cout<<"name="<<name<<endl;

	}
	friend istream& operator >>(istream &,A&);
};

istream & operator >>(istream &obj,A& obj2)
{
	cout<<"enter the data..."<<endl;
	obj>>obj2.id;
	obj>>obj2.name;
	return obj;
}

int main()
{
	A a;
	cin>>a;
	a.display();
}
