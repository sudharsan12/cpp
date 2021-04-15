// multiple constructor in class

#include<iostream>
using namespace std;
class add
{
	int m,n;
public: 
	add()
	{
		cout<<" its is default constructor........."<<endl;
		m=0;
		n=0;
	}
add(int a,int b )
{
	cout<<"the parameterized constructor"<<endl;
	m=a;
	n=b;
}
void getdata()
{
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
}
};
int main()
{
	add obj1(10,20),obj2(20,30),obj3(40,50),obj;  
	obj1.getdata();
	obj2.getdata();
	obj3.getdata();
	obj.getdata();
}
