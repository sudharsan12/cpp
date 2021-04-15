// function argument with reference
#include<iostream>
using namespace std;
class A
{
	public :int x;
		void set_data()
		{
			x=100;
		}
		void get_data()
		{
			cout<<"x="<<x<<endl;
		}
};

void outsidefun(A &obj)
{

	cout<<"in outside function definition..."<<endl;
	cout<<"x="<<obj.x<<endl;
	obj.x=200;
}
int main()
{
	A obj;
	obj.set_data();
	cout<<"before call...."<<endl;
	obj.get_data();
	outsidefun(obj);
	cout<<"after call "<<endl;
	obj.get_data();
}

