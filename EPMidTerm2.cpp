#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


int main ()
{
	char choice, status, time, parking, transit, asu;
	int units, hours, option=0;
	float cost=0, pay=0;
	bool good=true;


		ofstream file;
		file.open("Report.txt");

	cout<<"A. Enter student"<<endl;
	cout<<"B. Enter teacher"<<endl;
	cout<<"C. Exit"<<endl;
	cout<<"Enter choice: ";
	cin>>choice;

	if (choice=='c' || choice=='C')
	{
		cout<<endl;
		cout<<"Exiting ..."<<endl;
	}

	if (choice=='a' || choice=='A')
	{
		cout<<"1. Resident"<<endl;
		cout<<"2. Non-resident"<<endl;
		cout<<"Enter choice: ";
		cin>>status;

		if(status=='1'||status=='2')
		{
		
			file<<"Student"<<endl;
			
		cout<<"How many units: ";
		cin>>units;
		file<<"Units: "<<units<<endl;

		

		if (status=='1')
		{
			file<<"Resident"<<endl;
			cout<<"Parking pass? ";
		cin>>parking;
		if(parking=='y'||parking=='Y')
		{
			cost+=25;
			option+=1;
			file<<"Parking pass: Yes"<<endl;
		}

		else
		{
			file<<"Parking pass: No"<<endl;
		}

		cout<<"Transit pass? ";
		cin>>transit;
		if(transit=='y'||parking=='Y')
		{
			cost+=25;
			option+=1;
			file<<"Transit pass: Yes"<<endl;
		}

		else
		{
			file<<"Transit pass: No"<<endl;
		}

		cout<<"ASU membership? ";
		cin>>asu;
		if(asu=='y'||parking=='Y')
		{
			cost+=50;
			option+=1;
			file<<"ASU membership: Yes"<<endl;
		}

		else
		{
			file<<"ASU membership: No"<<endl;
		}
			cost+=36*units;
				cout<<endl;
				cout<<"Cost: $"<<cost<<endl;
				cout<<"Options: "<<option<<endl;
		}

		if (status=='2')
		{
			file<<"Non-resident"<<endl;
			cout<<"Parking pass? ";
		cin>>parking;
		if(parking=='y'||parking=='Y')
		{
			cost+=25;
			option+=1;
			file<<"Parking pass: Yes"<<endl;
		}
		else
		{
			file<<"Parking pass: No"<<endl;
		}

		cout<<"Transit pass? ";
		cin>>transit;
		if(transit=='y'||parking=='Y')
		{
			cost+=25;
			option+=1;
			file<<"Transit pass: Yes"<<endl;
		}
		else
		{
			file<<"Transit pass: No"<<endl;
		}

		cout<<"ASU membership? ";
		cin>>asu;
		if(asu=='y'||parking=='Y')
		{
			cost+=50;
			option+=1;
			file<<"ASU membership: Yes"<<endl;
		}
		else
		{
			file<<"ASU membership: No"<<endl;
		}

			cost+=190*units;
				cout<<endl;
				cout<<"Cost: $"<<cost<<endl;
				cout<<"Options: "<<option<<endl;
		}

		}

		else
		{
			good=false;
		}

		file<<"Cost: "<<cost<<endl;
		file<<"Options: "<<option<<endl;
	
		


	}

	if (choice=='b'||choice=='B')
	{
		file<<"Teacher"<<endl;
		cout<<"1. Full-time"<<endl;
		cout<<"2. Part-time"<<endl;
		cout<<"Enter choice: ";
		cin>>time;
		cout<<"How many hours: ";
		cin>>hours;
		

		if(hours>0)
		{

		if(time=='2')
		{
			if(hours<=9)
			{
			pay+=hours*40;
				cout<<"Pay: "<<pay<<endl;
				file<<"Part-time"<<endl;
				file<<"Hours: "<<hours<<endl;
				file<<"Pay: "<<pay<<endl;
			}
			if(hours>9)
			{
				cout<<"Too many hours!"<<endl;
			}
		}

		if(time=='1')

		{
			if(hours>=15 && hours<=24)
			{
			pay+=750+((hours-15)*40);
			cout<<"Pay: "<<pay<<endl;
			file<<"Full-time"<<endl;
			file<<"Hours: "<<hours<<endl;
			file<<"Pay: "<<pay<<endl;
			}
			if(hours<15)
			{
				cout<<"Too few hours!"<<endl;
			}
			if(hours>24)
			{
				cout<<"Too many hours!"<<endl;
			}
		}
		}

		else
		{
			cout<<"Invalid hours!"<<endl;
		}
	}

	if (good==false)
	{
		cout<<"Invalid choice!"<<endl;
	}


	file.close();

	system ("pause");
	return 0;
}
