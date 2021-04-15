// exception handling
//
// abnormal situation rise that time compiler throw exception that is handled
// called exception handling
//
//exception
//  an unpreditable behaviour on your program not caused by the operating system 
//  but that occurs in your program is called as exception
//
//  keywords to handled exception
//
//  try
//  throw
//  catch


//syntax of exception handling
//
//try{
//
//throw exception;
// }
//catch(datatype error)
// {
// -------
// -------
// }

// try
//   this block identifie a block of statement of which particular exception will be activated
//   it lets compiler known that you are anticipting an abnormal behaviour and wil try to deal with it.
//
// throw
//    the function of throw statement is to send the exception found.the declartion of throw 
//    statement is as given below syntax: throw excep;
//
//    the throw statement can be placed in function or in nested loop but it should be in try block
//    after throwing exception control pass to the catch statement
//
//  catch
//    when exception is found the catch block is executed 
//    A catch block catches the exception thrown by the throw statement in the try block and handled it.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the A value.."<<endl;
	cin>>a;
	cout<<"enter the B value..."<<endl;
	cin>>b;
	try{
		if (b!=0)
			cout<<"res="<<a/b<<endl;
		else
			throw "divided by zero";
		cout<<"division operation is sucessfully.."<<endl;
	}
	catch(const char *p)
	{
		cout<<"in the catch block.."<<endl;
		cout<<p<<endl;
	}

}
