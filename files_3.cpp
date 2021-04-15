// write the program for read  and write the string in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
	{
		string ch;
		ofstream fout;
		ifstream fin;
		fin.open("test.txt",ios::in);
		if(fin.fail())
		{
			cout<<"file is not opened..."<<endl;
			return 0;
		}
		fout.open("temp.txt",ios::out);
		if(fout.fail())
		{
			cout<<"file not opened for writing..."<<endl;
			return 0;
		}
	while(fin>>ch)
	{
		fout<<ch<<" ";
	}
	fin.close();
	fout.close();
	}

