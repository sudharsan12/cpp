 // in this program will allocate the memory for a class object
 
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	void set_data()
	{
		cout<<"enter the value.."<<endl;
		cin>>x;
		cin>>y;
	}
	void put_data()
	{
		cout<<"the data is ...."<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
};
int main()
{
	A *p=new A;
	cout<<long (&p)<<endl;	
	cout<<long (p)<<endl;
	p->set_data();
	p->put_data();

}
