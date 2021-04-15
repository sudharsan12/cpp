// shallow copy
//
//
// shallow copy(compiler provided copy)
//  shallow copy mechanism is refered  copy constructor
//
//it means copying one object data member  into onther object one after the onther
//
//if the clss data members having pointer modification of one object data will affect the other object ...because address is copied  from one object to another 
//object  
//
//ex)       ________________
//    ----->|a |b |c | d|\0|
//   |      ----------------
//   |______^
//         ||___________________
//         v_______            _|______
//          |_1000_|---------->|_1000_|

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


