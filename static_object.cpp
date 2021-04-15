// static object 
// static object of a class members by default initaize with zero
// note: the scope of the static object is with in block or function but lifetym  end with the program
//
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
	public:
	void get_data()
	{
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
int main()
{
	A obj;
	obj.get_data();
}

