#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int y[5];
	fstream f;
	f.open("temp.txt",ios::in|ios::out);
	if(f.fail())
	{
		cout<<"the file not create..."<<endl;
		return 0;
	}
	f.write((char *)a,sizeof(a));
	f.seekg(0,ios::beg);
        f.read((char *)y,sizeof(y));
	for(int i=0;i<5;i++)
		cout<<y[i]<<endl;
}
