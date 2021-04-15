//write a program to create a class name person having datamembers name and age define appropriate
//member function to find the elder person detail among three people
//

#include<iostream>
using namespace std;
class A
{
	int age;
	char name[10];
public:void get_data()
       {
	       cout<<"enter the name and details..."<<endl;
	       cin>>name;
	       cin>>age;
       }
       void display()
       {
	       cout<<"the yelder person..."<<endl;
	       cout<<"age --> "<<age<<endl;
	       cout<<"name --> "<<name<<endl;
       }
       A compare(A &obj)
       {
	       if(obj.age<age)
		      return *this;
	       else
		       return obj;
       }

};
int main()
{
	A a1,a2,a3,a4;
	a1.get_data();
	a2.get_data();
	a3.get_data();
	a4.get_data();
	a2=a1.compare(a2);
	a4=a3.compare(a2);
	a4=a4.compare(a3);
	a4.display();

}



