// function overloading comes under the compile time polymorphism
// the process define more than one process having same name that is function over loading
// the function arguments must be differentite with no of arguments present 
// this not depend on the retuurn type 
//name mangling technique used to differentiate the function
//ex-1)  add(int a,int b)--->add ii(a,b)
//     add(int a,int b,int c) ----> add iii(a,b,c)

//ex-2) add(int ,float)
//      add(float,int)



#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int add(int x,int y,int a)
{
	int c=x+y+a;
	return c;
}
int main()
{
	int a=10,b=20,x=30,y=40;
	int result=add(a,b);
	cout<<result<<endl;
	result=add(x,y,a);
	cout<<result<<endl;
}

