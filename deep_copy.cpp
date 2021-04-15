//deep copy
//
//solution for the shallow copyproblem
//ex)  
//          _______________       _______________
//    ----->|a |b |c | d|\0|----->|a |b |c |d |\0|
//   |      ----------------      -------^-------
//   |______                       ______|
//          |                     |
//          _______            ________
//          |_1000_|---------->|_2000_|
//            a1                  a2
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

       A(A &obj)
       {
	       p=new char [strlen(obj.p)+1];
	       strcpy(p,obj.p);
       }
       void change()
       {
	       p[0]='k';
       }
};
int main()
{
	A a("abcd"),a2(a);
	cout<<"before change..."<<endl;
	a.display();
	a2.display();
	a2.change();
	cout<<"after change..."<<endl;
	a.display();
	a2.display();
}


