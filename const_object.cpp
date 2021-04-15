// how to access const object in the class

// the property of an object goes into effect after the constructor fineshes executing and ends before the class desrutor 
// execute so,the construtor and destrutor  can modify the object ,but other methods of the class can't 

#include<iostream>
using namespace std;

class A
{

	int x;
	int y;
	public:
	A(int a,int b) //construtor
	{ 
		x=a;
		y=b;
	
	}

	~A() //destrutor
	{
		cout<<"the enter the value..."<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		
	}
};

int main()
{
	const A obj{10,20};
	//obj.getvalue();
}











