//.......this pointer.........

//this is special type of pointer .suppose  that  if you  create  an object named obj of 
//class A and class A has a non static member function fun() .if you call the function obj.fun()
//the fun(). the key word this in the body of the fun() stores the address of obj
//
//the  static member function doesn't have this pointer
//
//the starting address is same as the address of the first variable   

#include<iostream>
using namespace std;
 class A
{
	int x;
	char y;
public:void set_data()
       {
	       this ->x=10;
	       this ->y='a';
       }
       void get_data()
       {
	       cout<<"x="<<this->x<<endl;
	       cout<<"y="<<this->y<<endl;
       }
};
int main()
{
	A a;
	a.set_data();
	a.get_data();
}


