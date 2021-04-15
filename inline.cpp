//.........use of inline function...........

// when function is called the function returned address  stored on the stack do (push/pop)  
//at run time for every function call extra push and pop operation required this is extr burden to cpu
//that is resolved on the inline function this copy of the function is stored on the main function 


//...............inline function simply ignored..........

// the inline function having many statement inline function simply ignored
// recursion function having ignored
// function contain loops its simply ignored
// the function having static variable simply ignored
 

#include<iostream>
using namespace std;
inline void add(int a,int b)
{
	int c=a+b;
	cout<<c<<endl;
}
int main()
{
	int a=10,b=20;
	add(a,b);
}
