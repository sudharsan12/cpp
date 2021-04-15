// virtual function
//
// there are two type of polymorphism is possible
//   1) runtime polymorphism
//   2) compile time polymorphism
//
// 1)compile time polymorphism can be implemented through
// function overloading and operator over loading
//
// 2) runtime polymorphism is implemented using virtual function
// c++ makes use of a mechanism called virtual function
// which is enable selection of appropriate member function
//  this concept is known as run time polymorphism in this  concept is known 
//  runtime polymorphism  in this concept the function is linked
//  with  a particular class after compilation it is termed as dynmic binding
//
//  syntax:-   virtual return_type function_name(arguments)
//               {
//                
//
//                }
//
//Rules for virtual function
// virtual function cannot be static member 
// they must be member of class
// they must be accessed througth  object class
// A virtual function can be  friend of another class
// virtual constructor are not allowed virtual destructor are allowed
// poiter to a derived class can't be used to access an object of the base class
// the prototype of the virtual function of base class and all the derived class must be identical
//

#include<iostream>
 using namespace std;
 class A
{
	public : virtual void display()
		 {
			 cout<<"base class display function..."<<endl;
		 }
};
 class B:public A
{
	public : void display()
		 {
			 cout<<"derived class display function of b..."<<endl;
		 }
};
int main()
{
	A *p;
	B b;
	p=&b;
	p->display();
}
