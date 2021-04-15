// files 
//
// convenient way to deal large quantities of data stroe data permanently
//
//            ios
//           /   \
//          /     \
//         /       \
//     istream   ostream
//       /  \      /  \
//      /    \    /    \
//     /      \  /      \
//ifstream   iostream  ofstreamf
//    \        |         /
//     \       |        /
//      \      |       /
//       \     |      /
//        \    |     /
//          fstream
//
// ofstream - writing into file
// ifstream - reading into file
// fstream - reading/writing
//
// two types toopen file
// 1. using constructor
// 2. using open member function

// 1. using constructor
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{       //   _____________>class name
	//   |      ----------->object 
	ofstream fout("test.txt");// ----->parameterized constructor

	if(fout.fail())
	{
		cout<<"file is not created....."<<endl;
		return 0;
	}
	cout<<"file created sucessfully.."<<endl;
}
*/

// 2. using open member function


#include<iostream>
#include<fstream>
using namespace std;
int main()
{       //   _____________>class name
	//   |      ----------->object 
	ofstream fout;
	fout.open("temp.txt",ios::out);
	if(fout.fail())
	{
		cout<<"file is not created....."<<endl;
		return 0;
	}
	cout<<"file created sucessfully.."<<endl;
}

