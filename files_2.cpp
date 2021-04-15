//read the data from file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string h;
	ifstream fin;
	fin.open("test.txt",ios::in);
	if(fin.fail())
	{
		cout<<"the file enter is fail..."<<endl;
		return 0;
	}
	while(fin>>h)
	cout<<h<<" ";
	
	cout<<endl;
}
