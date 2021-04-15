//.............member function outside the class..........


#include<iostream>
using namespace std;

class emp
{
	private:
		int id;
		char name[20];
	public:
                void get_data();
		void put_data()
		{
			cout<<"this display the data..."<<endl;
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
		}
};


void emp::get_data()
		{
			cout<<"enter the data..."<<endl;
			cin>>id;
			cin>>name;
		}
int main()
{
	class emp n1,n2;
	cout<<"please enter the n1 details....."<<endl;
	n1.get_data();
	cout<<"please enter the n2 details....."<<endl;
	n2.get_data();
	cout<<"display the n1 details....."<<endl;
	n1.put_data();
	cout<<"display the n1 details....."<<endl;
	n2.put_data();
}




