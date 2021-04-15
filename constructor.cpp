// constructor
//
//the constructor that accept no parameter  that is called default construtor
//
// constructor is a special member function who is take to intilize the object of its class 
// its special because its name is same as the class name
// when object is create is associated with class
// there is no need to write to incoke the constructor
//ex)
//class add
//{
//int m,n;
//public: add(void);
//};
//Add::add(void)
//{
//m=0;
//n=0;}
//
//
//charateristics
//
// 1) they should be declared in the public section 
// 2) they do not have any return types not even void and cannot return vlue
// 3) they cannot be virtual
// 4)they cannot be inherited though a derived class can call the base construtor
// note: they programmer is defining own construtor.then defaultconstrutor provide by compiler will be drop.  
/*
#include<iostream>
using namespace std;
class add
{
	int m,n;
public: add();
};
add::add()// outside the class constructor
{
	m=0;
	n=0;
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
}
int main()
{
	add obj;
}
*/

#include<iostream>
using namespace std;
class add
{
	int m,n;
public: 
add()
{
	cout<<"the default constructor"<<endl;
	m=10;
	n=20;
}
void getdata()
{
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
}
};
int main()
{
	add obj1,obj2,obj3;  
	obj1.getdata();
	obj2.getdata();
	obj3.getdata();

	//result 
	//
	//the default constructor
	//the default constructor
	//the default constructor
	//m=10
	//n=20
	//m=10
	//n=20
	//m=10
	//n=20
}




