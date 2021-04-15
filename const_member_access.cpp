// how to access const members in the class
//
//
//when ever class member declared as const doest not modify or enter the value througth the member function is not possible
// so that there are one solution are provided that is constructor througth pass the value to data members is that possible  

#include<iostream>
using namespace std;
class A
{
	private :
		const int x;
		const int y;
	public:

		A(int a,int b) :x(a),y(b)
	        {
		//constructor
         	}
		void get_data()
		{
			cout<<"inside the get_data from ..."<<endl;
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
	//		x=10; //invalid
	//		y=20; //invalid
		}
/*		void temp() const // constant member function
		{
			// this is read only function
			cout<<"inside the temp function..."<<endl;
			cout<<"x="<<x<<endl<<"y="<<y<<endl;
			// x=10;  ---->invalid
			// y=20;  ---->invalid
		}*/
};
int main()
{
	A obj(10,20);
	
//	obj.temp();
	obj.get_data();
//	obj.temp();
}













