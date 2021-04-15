#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p=&a;
	int *(&q)=p;
	int **x=&p;
	cout<<"a="<<a<<endl;
	cout<<"*p="<<*p<<endl;
	cout<<"*q="<<*q<<endl;
	cout<<"**x="<<**x<<endl;
	cout<<"&a="<<&a<<endl;
	cout<<"&p="<<&p<<endl;
	cout<<"&q="<<&q<<endl;
	cout<<"&x"<<&x<<endl;
}
