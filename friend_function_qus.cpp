//program for class one member function  access the  friend  class  data memeber but the another one member function  should not allowed

#include<iostream>
using namespace std;
class boy;
class girl
{
public: void get_info(boy &);
	void modify_data(boy);
};
class boy{

	int income1;
	int income2;
public: void set_data()
	{
		cout<<"enter the income1..."<<endl;
		cin>>income1;
		cout<<"enter the income2..."<<endl;
		cin>>income2;
	}
	void get_data()
	{
		cout<<" in get data in main fum...."<<endl;
		cout<<"income1="<<income1<<endl;
		cout<<"income2="<<income2<<endl;
	}
	friend void girl::get_info(boy &);
};
void girl::get_info(boy &obj)
{
	cout<<"this outside function..."<<endl;
	cout<<obj.income1<<endl;
	cout<<obj.income2<<endl;
	obj.income1=10;
	obj.income2=20;
}
void girl::modify_data(boy b)
{
//		cout<<"income1="<<income1<<endl;-----------
//		                                            |---------->this is invalid because this function not  a friend function
//		cout<<"income2="<<income2<<endl;-----------
}
int main()
{
	boy b;
	girl g;
	b.set_data();
	b.get_data();

	g.get_info(b);
	b.get_data();
}



	

