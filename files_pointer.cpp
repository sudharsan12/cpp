// ............file pointer.............
//
//  *each file is associated with pointer known as file pointer.
//  * one of them is called input pointer (or) get pointer the get
//  pointer specfies a loction from which the current reading operation is initiated.
//  *other is called the  output pointer (or) put pointer the put pointer specefic a location from where
//  the current writing operation initated
//
//
//  ********************function manipulation of file poiter***************
//
//  seekg()- moves getpoiter to a specified location
//  seekp()-moves put pointer to a specified location
//  tellg()-gives the current  poisition of the get pointer
//  tellp()-gives the current position of put pointer
//
//  syntax of seekg and seekp
//
//       seekg(offset,reposition)
//       seekp(offset,reposition)
//                     |
//                     v
//                     ios:: beg -start of the file
//                     ios::cur  -cur position of the pointer
//                     ios::end -end of the file
//
//using fseekg using program

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	int ret;
	ifstream fin;
	fin.open("test.txt",ios::in);
	if(fin.fail())
	{
		cout<<"file not opened..."<<endl;
		return 0;
	}
	ret=fin.tellg();
	cout<<"pos="<<ret<<endl;
	ch=fin.get();
	cout<<"ch="<<ch<<endl;
	fin.seekg(3,ios::cur);
	ch=fin.get();
	cout<<"ch="<<ch<<endl;
	ret=fin.tellg();
	cout<<"pos="<<ret<<endl;
}

