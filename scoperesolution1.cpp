#include<iostream>
using namespace std;
int a=10;
int b=20;

int main()
{
	int a=100;
	int b=200;
	cout<<"b="<<::b<<endl;
	{
		int a=50;
		cout<<"a="<<a<<endl;
		cout<<"a="<<::a<<endl;
	}
	cout<<"b="<<b<<endl;
	cout<<"a="<<a<<endl;
}

