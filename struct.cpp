#include<iostream>
using namespace std;
struct emp
{
	int id;
	char name[20];

	void setdata()
	{
		cout<<"enter the data..."<<endl;
		cin>>id;
		cin>>name;
	}
	void putdata()
	{
		cout<<"print the data..."<<endl;
		cout<<"id="<<id<<endl;
		cout<<"name="<<name<<endl;
	}
};
int main()
{
	struct emp n;
	n.setdata();
	n.putdata();
}
