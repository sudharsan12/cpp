// it will takes  argument----> retrn_type operator @(int);
// it will takes two arguments in friend ----> return_type operator @(A &obj,int);


/*
#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public : A()
	 {
		 x=100;
		 y=200;
	 }
	 void display()
	 {
		 cout<<"x="<<x<<endl;
		 cout<<"y="<<y<<endl;
	 }

	
	 void operator ++(int)
	 {
		 x++;
		 y++;
	 }
};

int main()
{
	A a;
	a.display();
	a++;//----> equal to a.operator ++(int );
	a.display();
}
*/

//friend function



#include<iostream>
using namespace std;
class A
{
	int x;
	int y;

public : A()
	 {
		 x=100;
		 y=200;
	 }
	 void display()
	 {
		 cout<<"x="<<x<<endl;
		 cout<<"y="<<y<<endl;
	 }

	 friend void operator ++(A&,int);
};

	
	 void operator ++(A &obj,int)
	 {
		 obj.x++;
		 obj.y++;
	 }


int main()
{
	A a;
	a.display();
	a++;//----> equal to a.operator ++(int );
	a.display();
}
