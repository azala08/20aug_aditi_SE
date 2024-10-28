/*	Assessment-2 : Create a Project to demonstrate an Event Organiser Project which will help to manage 
the Events. The Project should contain all the necessary requirements i.e need to use 
conditional Statements, Loops, Function and also A Program should use the concept 
of OOP. */

#include<iostream>
using namespace std;
class event
{
	public:
	string enm,fnm,lnm;
	int nguest,emin;	
	void getdata()
	{
		cout<<"Enter the name of event:";
		cin>>enm;	
		cout<<"Enter the customer's first and last name:";
		cin>>fnm>>lnm;
		cout<<"Enter the number of guest:";
		cin>>nguest;
		cout<<"Enter the number of minutes in the event:";
		cin>>emin;
		cout<<endl<<endl;	
	}	
};
class estimation : public event 					
{																															
	public:
	double permin=0.40,dinner=20.70,perhour=18.50;
	float cost1,cost2,fcost,no_server,totalfcost,avg,totalcost,damt;
	void estimate()
	{
		cout<<"=============== Event Estimate for "<<fnm<<" "<<lnm<<" ===============";
		
		no_server=nguest/20;
		cout<<"\nNumber of server:"<<no_server;
	
		cost1=(emin/60)*perhour; 
		cost2=(emin%60)*permin;
		fcost=cost1+cost2;
		
		cout<<"\nThe cost for server:"<<fcost;
		
		totalfcost=nguest*dinner;
		cout<<"\nThe cost for food is:"<<totalfcost;
		
		avg=totalfcost/nguest;
		cout<<"\nAverage cost per person:"<<avg<<endl<<endl;
		
		totalcost=totalfcost + (fcost * no_server);
		cout<<"Total cost is:"<<totalcost;		
		
		cout<<"Please deposite a 25% deposite to reserve the event";
		
		damt=totalcost*.25;
		cout<<"\nThe deposite needed is:"<<damt;
	}
};
main()
{    
	estimation e;
	e.getdata();
	e.estimate();
}   
