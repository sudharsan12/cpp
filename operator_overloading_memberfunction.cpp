// the following opertor are possible to overloaded only if operator function as member function
// 1. assignment operator (=)
// 2.array subscript operator ([])
// 3. function operator ()
// 4.poiter to member function (->)
//

#include<iostream>
using namespace std;
/*
class A
{
	int x;
	int y;
public: void set_data()
	{
		cout<<"eneter the data..."<<endl;
		cin>>x;
		cin>>y;
	}
	void get_data()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
	void operator =(A obj)
	{
		x=obj.x;
		y=obj.y;
	}

};
int main()
{
	A a1,a2;
	a1.set_data();
	a2=a1; //----> a2.operator =(a1);
	a1.get_data();
	a2.get_data();
}
// ........array subscribtor.......
class A
{
	int x[5];
public: void set_data()
	{
		for(int i=0;i<5;i++)
		{
			x[i]=1+i;
		}
	}
	int operator [](int i)
	{
		return (x[i]);
	}

};
int main()
{
	A a;
	int i;
	a.set_data();
	cout<<"enter the index position...."<<endl;
	cin>>i;
	cout<<a[i]<<endl; // a.operator [](i);

}

//......function operator.......
class A
{
	int x,y;
public: void operator ()(int i,int j)
	{
		x=i;
		y=j;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}


};
int main()
{
	A a;
	int p,q;
	cout<<"enter the value p and q...."<<endl;
	cin>>p;
	cin>>q;
	a(p,q);
	a.display();

}
*/

//.........pointer member function....

#include<iostream>
using namespace std;
class A
{
	int x;
public: A()
	{
		x=100;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
	}
	A* operator ->()
	{
		return this;
	}
};
int main()
{
	A obj ,*p;
	p=&obj;
	p->display();
	obj->display(); //obj.operator->display();
}
