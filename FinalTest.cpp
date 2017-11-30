#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;




int main()

{
	char choice, quit;
	int sold, made, bricks=5, totalsold=0, totalmade=0;
	float balance=30.00, check;
	bool flag=true;
	cout<<fixed<<setprecision(2);

	do
	{

	cout<<"A. Sell brick"<<endl;
	cout<<"B. Make brick"<<endl;
	cout<<"C. Exit"<<endl;
	cout<<"Enter choice: ";
	cin>>choice;
	

	if (choice=='A'||choice=='a')
	{
		cout<<"Enter number of sold: ";
		cin>>sold;


		if (sold>0 && sold<=bricks)
		{
		balance+=(sold*9.50);
		bricks-=sold;
		totalsold+=sold;
		}

		else if (sold<=0)
		{
			cout<<"Invalid input"<<endl;
			cout<<"Quit? ";
			
			cin>>quit;

			if (quit=='y' || quit=='Y')
				flag=false;
			else
			{}
		}


		else
		{
			cout<<"Not enough bricks"<<endl;
		}
		
	}

	if (choice=='B'||choice=='b')
	{
		cout<<"Enter number made: ";
		cin>>made;
		check=made*5.50;
		if (made>0 && check<=balance)
		{
		balance-=(made*5.50);
		bricks+=made;
		totalmade+=made;
		}
		else if (made<=0)
		{
			cout<<"Invalid input"<<endl;
			cout<<"Quit? ";
			
			cin>>quit;

			if (quit=='y' || quit=='Y')
				flag=false;

		}
		else
			cout<<"Not enough money"<<endl;
	}

	/*if (choice!='B'||choice!='b' && choice!='C'||choice!='c' && choice!='A'||choice!='a')
	{
		cout<<"Invalid input"<<endl;
	}*/

	}
	while (!(choice=='c' || choice=='C') && flag);
	
	if (choice=='C'||choice=='c')
	{
		cout<<"Account balance: $"<<balance<<endl;
		cout<<"Bricks sold: "<<totalsold<<endl;
		cout<<"Bricks made: "<<totalmade<<endl;
		cout<<"Remaining inventory: "<<bricks<<endl;

		ofstream outputfile;
		outputfile.open("Report.txt");
		outputfile<<"Account balance: $"<<balance<<endl;
		outputfile<<"Bricks sold: "<<totalsold<<endl;
		outputfile<<"Bricks made: "<<totalmade<<endl;
		outputfile<<"Remaining inventory: "<<bricks<<endl;
		outputfile.close();

	}

	else if (flag==false)
	{
		cout<<"Account balance: $"<<balance<<endl;
		cout<<"Bricks sold: "<<totalsold<<endl;
		cout<<"Bricks made: "<<totalmade<<endl;
		cout<<"Remaining inventory: "<<bricks<<endl;


		ofstream outputfile;
		outputfile.open("Report.txt");
		outputfile<<"Account balance: $"<<balance<<endl;
		outputfile<<"Bricks sold: "<<totalsold<<endl;
		outputfile<<"Bricks made: "<<totalmade<<endl;
		outputfile<<"Remaining inventory: "<<bricks<<endl;
		outputfile.close();
	}

	system ("pause");
	return 0;
}
