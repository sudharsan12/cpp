// argument passing function classified three types
//
//   1) call by value
//   2) call by address
//   3) call by reference



//   1) call by value
/*
#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=10,b=20;
	cout<<"before swapping value"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"after swapping vlue"<<endl;
	swap(a,b);
	cout<<"a="<<a<<"b="<<b<<endl;
}
*/

//2)call by address
/*
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a=10,b=20;
	cout<<"before swapping value"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"after swapping vlue"<<endl;
	swap(&a,&b);
	cout<<"a="<<a<<"b="<<b<<endl;
}
*/

//3)call by reference

#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=10,b=20;
	cout<<"before swapping value"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"after swapping vlue"<<endl;
	swap(a,b);
	cout<<"a="<<a<<"b="<<b<<endl;
}
