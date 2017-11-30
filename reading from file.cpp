#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	ifstream inputfile;

	inputfile.open ("something.txt");
	if(!inputfile)
	{
		cout<<"Error opening file. \n";
	}
	else
	{
		inputfile>>number;
		while (!inputfile.eof())
		{
			cout<<number<<" ";
			inputfile>>number;
		}
		cout<<endl;
		inputfile.close();
	}


	system ("pause");
	return 0;
}