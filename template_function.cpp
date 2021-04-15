// template
//
// template is method for writing a single function or class for a
// similar function or class in a generic manner
//
// two types template is possible
//  1) function template
//  2) class template

//function_template 
//
//when a single function is written for family of similer function
//it is called as function template
//
//function template are special function which come operate with generic types.
//
//syntax:
//    template <class T> (or) template <typename T>
//
//    return_type function_name(paramers of type T)
//    {
//
//    }
//
// function template exaple program
/*
#include<iostream>
using namespace std;
template <typename H>
H add(H m,H n)
{
	return (m+n);
}
int main()
{
	int x,y;
	float a,b;
	cout<<"enter the integer value..."<<endl;
	cin>>x>>y;
	cout<<"enter the float value.."<<endl;
	cin>>a>>b;
	cout<<"ADD TO INTEGERS.."<<add(x,y)<<endl;
	cout<<"ADD TO FLOAT.."<<add(a,b)<<endl;
}
*/

//more than one type argments 

#include<iostream>
using namespace std;
template <typename T1,typename T2>
T1 add(T1 m,T2 n)
{
	return (m+n);
}
int main()
{
	int x,y;
	float a,b;
	cout<<"enter the integer value..."<<endl;
	cin>>x>>y;
	cout<<"enter the float value.."<<endl;
	cin>>a>>b;
	cout<<"ADD TO INTEGERS.."<<add(x,a)<<endl;
	cout<<"ADD TO FLOAT.."<<add(b,y)<<endl;
}
