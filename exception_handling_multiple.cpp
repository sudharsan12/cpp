// NOTE:
// in the above program throw argument must be identical to one of the catch block
// oter result is unpredictable
//
// when catch block is executed other catch block are bypasssed.
// template function not used in the exception function
//

#include<iostream>
using namespace std;
int main()
{
	int op;
	cout<<"1->int 2->float 3->char 4->string  "<<endl;
	cout<<"enter any one.."<<endl;
	cin>>op;
	try
	{
		if(op==1)
			throw 1;
		if(op==2)
			throw 22.5;
		if(op==3)
			throw 'a';
		if(op==4)
			throw "string";
		else
			throw "invalid option";
	}
	catch(int v)
	{
		cout<<"this integer..."<<endl;
		cout<<v<<endl;
	}
	catch(float a)
	{
		cout<<"this is float.."<<endl;
		cout<<a<<endl;
	}
	catch(char a)
	{
		cout<<"this is char..."<<endl;
		cout<<a<<endl;
	}
	catch(const char *p)
	{
		cout<<"this is string.."<<endl;
		cout<<p<<endl;
	}
}

