// destructor 
//
// the used to destroy the object that have been creates by the constructor
// ex)A() // constructor
// {
//
// }  
// ~A()// destructor
//      {
//      
//      }
//it is never take argument and don't take return value
//
//it will compiler invoked implicitly
//it good paractice to use declare in the program free the memory to onther variable
//
//NOTE:the destructor is executed on the life of the object completed
//      the execute in the reverse order of the constructor execution
//
/*
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<" in construtor...."<<endl;
	}
	~A()
	{
		cout<<" in desructor..."<<endl;
	}
};
int main()
{
	A obj,obj2;
	{
		cout<<"enter in to the block..."<<endl;
		 A obj3;
		cout<<"block is completed...."<<endl;
	}
	cout<<"enter  into the block..."<<endl;
}
result:
in constructor
in constructor
enter into the block
in constructor
block is compleded
in desrutor
enter into the block
in desrutor
in desrutor
*/
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<" in construtor...."<<endl;
	}
	~A()
	{
		cout<<" in desructor..."<<endl;
	}
};
int main()
{
	A obj,obj2;
	{
		cout<<"enter in to the block..."<<endl;
		static A obj3;
		cout<<"block is completed...."<<endl;
	}
	cout<<"enter  into the block..."<<endl;
}
/* result
 *
in constructor
in constructor
enter into the block
in constructor
block is compleded
enter into the block
in desrutor
in desrutor
in desrutor
 */
