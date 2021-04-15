#include<iostream>
using namespace std;
int& fun()
{
	
	static int x=10;
	cout<<"x="<<&x<<endl;
	return x;

}
int main()
	{
		fun()=30;
		cout<<fun();
	}

