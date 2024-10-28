/* Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 

2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance */

#include<iostream>
using namespace std;
class ac_open
{
	public:
	int num,bal;
	string name,type;
	void ac_getdata()
	{
		cout<<"Enter account holder name:";
		cin>>name;
		cout<<"Enter account number:";
		cin>>num;
		cout<<"Enter account type:";
		cin>>type;	
		cout<<"Enter balance amount:";
		cin>>bal;
	}		
};
class deposite
{ 
	public:
	int dep;
	void de_getdata()
	{
		cout<<"Enter deposit:";
		cin>>dep;
		if(dep<=500)
		{
			cout<<"Please enter valid amount...\n";
		}
	}
};
class wd : public ac_open
{
	public:
	int wd;
	void wd_getdata()
	{
		cout<<"Enter withdrawal amount:";
		cin>>wd;
		if(bal>wd)
		{
			cout<<"Successfully withdrawal....";	
		}	
		else
		{
			cout<<"Enter valid amount...";
		}
	}
};
	
class bank : public deposite, public wd
{
	public:
		void printdata()
		{
			cout<<"\n\nAccount holder name:"<<name<<endl;
			cout<<"Account number:"<<num<<endl;
			cout<<"Account type:"<<type<<endl;
			cout<<"Account balance:"<<bal-wd;
		}
};
main()
{
	bank b;
	b.ac_getdata();
	b.de_getdata();
	b.wd_getdata();
	b.printdata();
}

