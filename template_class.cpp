// class template
//
//A class template is a class definition that descripe a family
//of related class cPP ooer the user ability to create that contain
//one or more type that  a genric 
// the manner of declring template is same of that of a function
//
// syntax:
//        template <class T>
//        class name_of_class
//        {
//
//        } 

#include<iostream>
using namespace std;
template <class T>
class stack {
	T stk[5];
	int top;
public: stack()
	{
		top=-1;
	}
	void push(T item)
	{
		top++;
		if(top>4)
		{
			cout<<"stack over flow..."<<endl;
			return;
		}
		stk[top]=item;
		cout<<item<<"  inserted"<<endl;
	}
	T pop();
	void show();
};
template <class T>
T stack<T>::pop()
{
	if(top==-1)
		cout<<"no elements in the stack under flow"<<endl;
	else{
	T element;
       element=stk[top];
       top--;
       return element;
	}
}
template <class T>
void stack<T>::show()
{
	if (top==-1)
		cout<<"stack is empty..."<<endl;
	else
	{
		cout<<"stack element"<<endl;
		for (int i=top;i>=0;i--)
			cout<<stk[i]<<endl;
	}
}
int main()
{
	stack<int>int_stack;
	int_stack.push(10);
	int_stack.push(20);
	int_stack.push(30);
	int_stack.push(40);
	int_stack.push(50);
	cout<<"display the element in stack..."<<endl;
	int_stack.show();
	stack<char>stack_char;
	stack_char.push('a');
	stack_char.push('b');
	stack_char.push('c');
	stack_char.push('d');
	stack_char.push('e');
	cout<<"display the element in stack..."<<endl;
	stack_char.show();
}
