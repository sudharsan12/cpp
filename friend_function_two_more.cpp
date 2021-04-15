#include<iostream>
using namespace std;
class wife; //------------->pre class declaration
class husbend
{
	int sal;
	string name;
public: void set_data()
	{
		cout<<"enter the husbend name.."<<endl;
		cin>>name;
		cout<<"enter the husbend salary..."<<endl;
		cin>>sal;
	}
	void put_data()
	{
		cout<<"husbend name:"<<name<<endl;
		cout<<"husbend salary.."<<sal<<endl;
	}
	friend int total(husbend,wife);
};
class wife 
{
	int sal;
	string name;
public: void set_data()
	{
		cout<<"enter the wife name.."<<endl;
		cin>>name;
		cout<<"enter the wife salary..."<<endl;
		cin>>sal;
	}
	void put_data()
	{
		cout<<"wife name:"<<name<<endl;
		cout<<"wife salary.."<<sal<<endl;
	}
	friend int total(husbend,wife);
};

int total(husbend obj1,wife obj2)
{
	return (obj1.sal+obj2.sal);
}
int main()
{
	husbend h;
	wife w;
	cout<<"enter husbend details.."<<endl;
	h.set_data();
	cout<<"enter wife detail..."<<endl;
	w.set_data();
	cout<<"show both are detail..."<<endl;
	h.put_data();
	w.put_data();
	cout<<"show total salary...."<<endl;
	cout<<total(h,w)<<endl;
}


