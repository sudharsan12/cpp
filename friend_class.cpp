// friend class

// if B is friend of A A not  necessarily  a friend of B
// declaration ---------->  friend class  <class_name>

#include<iostream>
using namespace std;
class boy
{
	int a;
	int b;
public: void put_data()
	{
		cout<<"enter the value..."<<endl;
		cin>>a;
		cin>>b;
	}
	void get_data()
	{
		cout<<"get data on the main class.."<<endl;
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
	}
	friend class girl;
};
class girl
{
	public:
		void get_info(boy b)
		{
		cout<<"get the info in the friend class..."<<endl;
		cout<<"a="<<b.a<<endl;
		cout<<"b="<<b.b<<endl;
		}
		void get_modify(boy &b)
		{
			cout<<"modify the data on the friend class...."<<endl;
			b.a=10;
			b.b=20;
		}
};

int main()
	{
		boy b;
		girl g;
		b.put_data();
		b.get_data();
		g.get_info(b);
		g.get_modify(b);
		b.get_data();
	}



