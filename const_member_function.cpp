// how to access class member function is const
//
//when ever declared const member function througth data member modify is not possile its only for reading

#include<iostream>
using namespace std;
class A
{
	private :
		 int x;
		 int y;
	public:

	       void set_data()
		{
			cout<<"enter the data...."<<endl;
			cin>>x;
			cin>>y;
         	}
		void get_data()
		{
			cout<<"inside the get_data from ..."<<endl;
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
			x=10;//---------->valid
			y=20;//---------->valid
		}
        	void temp() const // constant member function
		{
			// this is read only function
			cout<<"inside the temp function..."<<endl;
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
			// x=10;  ---->invalid
			// y=20;  ---->invalid
		}
};
int main()
{
	A obj;
	obj.set_data();
	obj.temp();
	obj.get_data();
	obj.temp();
}













