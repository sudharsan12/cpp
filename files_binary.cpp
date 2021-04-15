// binary files
//  
// binary files not portability,because its doesnt read normally
//
// binary files function
//
// inorder to handled binary files in c++ two calles are presented 
//           1. read()
//           2. write()
//
//  syntax:
//        obj.read((char*)&,sizeof(data));
//        obj.write((char*)&,sizeof(data));
//

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x=1000;
	int y;
	ofstream fout;
	fout.open("temp.txt",ios::out);
	if(fout.fail())
	{
		cout<<"file is not opened.."<<endl;
		return 0;
		}
	fout.write((char *)&x,sizeof(x));
	fout.close();
	ifstream fin;
	fin.open("temp.txt");
	if(fin.fail())
	{
		cout<<"file is not opened..."<<endl;
		return 0;
	}
	fin.read((char *)&y,sizeof(y));
	cout<<"y="<<y<<endl;
}
