#include<iostream>
using namespace std;
class A
{
	static int count;
public:
	A(){
		count++;
		cout<<"constructor msg:"<<"object-->"<<count<<" creted"<<endl;
	}
	~A()
	{
		cout<<"destructor msg:"<<"object-->"<<count<<" destroy"<<endl;
		count--;
	}
};
int A::count=0;
int main()
{
	A obj,obj2;
	{
		cout<<"enter into block..."<<endl;
		A obj3;
		cout<<"block is completed..."<<endl;
	}
	cout<<"enter into the main function.."<<endl;
}


