#include<iostream>
using namespace std;
namespace one
{
	int x=10;
	namespace two
	{
		int x=100;
	}
}
namespace three 
{
	int x=1000;
}
int main()
{
	using namespace three;
	cout<<x<<endl;
	//using namespace two;
	cout<<one::two::x<<endl;
	//cout<<two::x<<endl;
}


	
