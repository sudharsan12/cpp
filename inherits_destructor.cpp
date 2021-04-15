#include<iostream>
using namespace std;
class A
{
public:A()
       {
	       cout<<"base class constructor..."<<endl;
       }
      ~A()
       {
	       cout<<"base class desstructor..."<<endl;
       }
};
class B:public A
{
public:B()
       {
	       cout<<"derived class constructor..."<<endl;
       }
      ~B()
       {
	       cout<<"derived class desstructor..."<<endl;
       }
};
int main()
{
	B b;
}
