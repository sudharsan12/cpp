//......exception in new opertor using......
//in this programm throw  bad_alloc exceptional error
/* 
#include<iostream>
using namespace std;
int main()
{
	int *p=new int[1000000000000];
	cout<<p<<endl;
}

*/

// remove the error using (nothrow )

#include<iostream>
using namespace std;
int main()
{
	int *p=new (nothrow) int[1000000000000];
	cout<<p<<endl;
}


