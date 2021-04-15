#include<iostream>
using namespace std;

struct A
{
	mutable int a;
	int b;
};
int main()
{
	const struct A v={10,20};
	cout<<"a="<<v.a<<endl;
	cout<<"b="<<v.b<<endl;
	v.a=100;
//	v.b=200;//invalid option
	cout<<"a="<<v.a<<endl;
	cout<<"b="<<v.b<<endl;
}
