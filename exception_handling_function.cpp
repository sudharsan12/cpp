#include<iostream>
using namespace std;
int divi(int m,int n)
{
	if(n==0)
		throw "divided by zero is not possible";
	else
		return (m/n);
}
int main()
{
	int a,b,res;
	cout<<"enter the a value.."<<endl;
	cin>>a;
	cout<<"enter the b value.."<<endl;
	cin>>b;
	try{
		res=divi(a,b);
		cout<<"division operation is sucess..="<<res<<endl;
	}
	catch(const char *p)
	{
		cout<<"the catch block.."<<endl;
		cout<<p<<endl;
	}
}



