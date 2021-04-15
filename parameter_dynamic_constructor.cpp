//parameterized  dynamic constructor
//
//this constructor can also be used to allocate memory while creating object
//this system will allocate the right amount of memory for each object
#include<iostream>
#include<string.h>

using namespace std;
class A
{
       char *p;
public:
       void display()
       {
	       cout<<"p="<<p<<endl;
       }
       A(char *q)
       {
	       p=new char[strlen(q)+1];
	       strcpy(p,q);
       }

};
int main()
{
	A a("abcd"),a2("sudhrsan"),a3("surya");
	cout<<"before change..."<<endl;
	a.display();
	a2.display();
	a3.display();
}


