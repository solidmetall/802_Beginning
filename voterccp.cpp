#include <iostream>
using namespace std;

int main()
{
	int age;
	char citizen;
	bool valid=true;

	cout << "Please enter your full age: ";
	cin >> age;
	if (age<=0)
	{
		cout<<"invalid age \n";
		valid==false;
	}
	if(valid==true)
	{
	if (age>=18&&age>0)
	{
		cout<<"Are you Citizen?";
		cin>>citizen;
		if (citizen=='y' || citizen=='Y')
			cout<<"You are eligible to  vote"<<endl;
		else
			cout <<"You are not eligible to vote!"<<endl;
	}
	else 
	
		cout<<"You are not eligible to vote"<<endl;
	system ("pause");
	return 0;
}