#include<iostream>
using namespace std;
namespace A
{
	int x=10;
	int y=20;
}
namespace B
{
	int x=100;
	int y=200;
}
int main()
{
	using namespace B;
       cout<<x<<endl;
       cout<<A::y<<endl;
}       
