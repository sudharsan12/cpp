//getline()  predefined function in class istream
//
//this is used read the string with spaces


#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cout<<"enter the string...."<<endl;
	cin.getline(a,20);
	cout<<"a="<<a<<endl;
}
