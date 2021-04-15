#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string ch;
	ofstream fout;
	fout.open("test.txt",ios::out);
	if(fout.fail())
	{
		cout<<"file not created.."<<endl;
		return 0;
	}
	cout<<"enter the character.."<<endl;
	cin>>ch;
	fout<<ch;
}
