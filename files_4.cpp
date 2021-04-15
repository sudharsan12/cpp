// read the data from file by line by line
//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char h[100];
	ifstream fin;
	ofstream fout;
	fin.open("test.txt",ios::in);
	if(fin.fail())
	{
		cout<<"file not opened"<<endl;
		return 0;

	}
	while(!fin.eof())
	{
		fin.getline(h,100);
		cout<<h<<endl;
	}
	fin.close();
}
