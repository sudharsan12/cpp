#include<iostream>
using namespace std;

namespace one
{
	int x=10;
	int fun(int a)
	{
		int c=a*x;
		//cout<<c<<endl;
		return c;
	}
}
namespace two
{
	int x=20;
	int fun(int a)
	{
		int c=a*x;
		//cout<<c<<endl;
		return c;
	}
}
int main()
{
	int a=2;
	cout<<one::fun(a)<<endl;
	cout<<two::fun(a)<<endl;
}
