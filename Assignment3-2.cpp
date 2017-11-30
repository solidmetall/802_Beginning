#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main ()
{
	string name;
	int hours;
	char package;
	float total=0;

	cout<<fixed<<setprecision(2);
	cout<<"Enter your name: ";
	getline (cin, name);

	cout<<"Packages available: A or B or C"<<endl;
	cout<<"Which package was purchased?: ";
	cin>>package;
	
	if (package=='A' || package=='a' || package=='B' || package=='b')
	{
		
	cout<<"How many hours were used?: ";
	cin>>hours;
	if (hours>0 && hours<744)
	{
	cout<<endl<<endl<<endl;

		if (package=='A' || package=='a')
	{
		total+=9.95+((hours-10)*2.00);

		if (total>14.95 && total < 19.95)
		{
			cout<<"Customer name: "<<name<<endl;
			cout<<"Package: "<<package<<endl;
			cout<<"The total amount due is: "<<total<<endl;
			cout<<"You would have saved $"<<total-14.95<<" by selecting package B"<<endl;
		}

		if (total>14.95 && total > 19.95)
		{
			cout<<"Customer name: "<<name<<endl;
			cout<<"Package: "<<package<<endl;
			cout<<"The total amount due is: "<<total<<endl;
			cout<<"You would have saved $"<< (9.95+((hours-10)*2.00))-(14.95+1*(hours-20))<<" by selecting package B"<<endl;
			cout<<"You would have saved $"<<total-19.95<<" by selecting package C"<<endl;
		}

		if (total>0 && total<14.95)
		{
			cout<<"Customer name: "<<name<<endl;
			cout<<"Package: "<<package<<endl;
			cout<<"The total amount due is: "<<total<<endl;
		}
	}



		if (package=='B' || package=='b')
		{
			if (hours>20)
			{
			total+=14.95+((hours-20)*1.00);
			if (total>0 && total>19.95 && hours>=20)
			{
				cout<<"Customer name: "<<name<<endl;
				cout<<"Package: "<<package<<endl;
				cout<<"The total amount due is: "<<total<<endl;
				cout<<"You would have saved $"<<total-19.95<<" by selecting package C"<<endl;
			}
			}

			if (hours<20)
			{
				total+=14.95;
				cout<<"Customer name: "<<name<<endl;
				cout<<"Package: "<<package<<endl;
				cout<<"The total amount due is: "<<total<<endl;

			}
	

		}

		}
	else if (!(hours>=0 && hours<744))
	{
		cout<<endl;
		cout<<"Invalid: Hours cannot possibly exceed 744"<<endl;

	}

	}

	if (package=='c' || package=='C')
	{
				cout<<endl;
				total+=19.95;
				cout<<"Customer name: "<<name<<endl;
				cout<<"Package: "<<package<<endl;
				cout<<"The total amount due is: "<<total<<endl;
	}

		else if (!(package=='A' || package=='a' || package=='B' || package=='b' || package=='C' || package=='c'))
	
		{
		cout<<endl;
		cout<<"Invalid Input, available packages are: A or B or C"<<endl;
		}




	system ("pause");
		return 0;
}


