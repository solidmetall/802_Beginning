#include <iostream>
#include <iomanip>

using namespace std;

int main()

{


	int nos, aps, as=0, bs=0, cs=0, ds=0, fs=0, agpa=0;
	char grade, choice;
	
	bool flag=true;

	
	cout<<"Enter number of students: ";
	cin>>nos;
	cout<<endl;

	if (nos>0 && flag )
	{


	for (int loops=1; loops<=nos; loops++)

	{
		
		cout<<"enter average for student "<<loops<<": ";
		cin>>aps;

		if (aps>=90 && aps<=100)
		{
			grade='A';
			as++;
			agpa+=4.00;
			cout<<"Grade: "<<grade<<endl;

		}
		else if(aps>=80 && aps<=100)
		{
		grade='B';
		bs++;
		agpa+=3.00;
		cout<<"Grade: "<<grade<<endl;
		}
		else if(aps>=70 && aps<=100)
		{
			grade='C';
			cs++;
			agpa+=2.00;
			cout<<"Grade: "<<grade<<endl;
		}
		else if (aps>=60 && aps<=100)
		{
				grade='D';
				ds++;
				agpa+=1.00;
				cout<<"Grade: "<<grade<<endl;
		}

		else if (aps>0 && aps<=59)
		{
			grade='F';
			fs++;
			cout<<"Grade: "<<grade<<endl;
			
		}

		else
		{
			cout<<"Invalid input ..."<<endl;
			cout<<"Wanna try again? Y/N"<<endl;
			cin>>choice;

			if (choice == 'Y' || choice =='y')

			{
				--loops;
			}


		}




	}
		
		cout<<endl;
		cout<<"A-"<<as<<endl;
		cout<<"B-"<<bs<<endl;
		cout<<"C-"<<cs<<endl;
		cout<<"D-"<<ds<<endl;
		cout<<"F-"<<fs<<endl;
		cout<<"Average GPA is: "<<agpa/(float)nos<<endl;

	}
	else
	{
		cout<<"Invalid input..."<<endl;

	}

	
	system ("pause");
	return 0;
	
}
