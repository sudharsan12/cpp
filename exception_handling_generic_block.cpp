// genric catch block
//
// if there is no argument to pass catch  must at least to take three period argument as in catch
//    catch(...);
//
//    NOTE:
//       if we will try to write any code in between try blocked catch leads to compile time error

#include<iostream>
using namespace std;
void fun()
	{
		int op;
		cout<<"1->int 2-> char 3->float 4->string"<<endl;
		cin>>op;
		if(op==1)
			throw 1;
		if(op==2)
			throw 'a';
		if(op==3)
			throw 22.7;
		if(op==4)
			throw "string";
		else
			throw "invalid option";
	}
int main()
{
	try{
		fun();
	}
	catch(...)
	{
		cout<<"genric function.."<<endl;
	}
}
