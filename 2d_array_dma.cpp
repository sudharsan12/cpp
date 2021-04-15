#include<iostream>
using namespace std;

int main()
{

	int i;
	int **p=new int*[4];
		for(i=0;i<4;i++)
		   *(p+i)=new int[5];
	cout<<"enter the data"<<endl;
	for(i=0;i<4;i++)
		for(int j=0;j<5;j++)
			cin>>*(*(p+i)+j); // p[i][j]
	cout<<"display the data"<<endl;
	for(i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
			cout<<*(*(p+i)+j)<<" ";//p[i][j]
		cout<<endl;
cout<<"address="<<p<<"="<<long(p+i)<<endl;
	}



}
