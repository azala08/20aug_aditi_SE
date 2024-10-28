/* que_5 : Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include<iostream>
using namespace std;
class batsman
{
	public:
	int n,i,run[5],avg,best,add=0;
	void getinfo()
	{
		cout<<"Number of matches ";
		cin>>n;
		for( i=0 ; i<n ;i++)
		{
			cout<<"Total run in each match : ";
			cin>>run[i];
			add += run[i];
		}
	}
	int total()
	{
		return add;
		//cout<<"\ntotal run : "<<sum;
	}
	void averagerun()
	{
		avg=add/n;
		//cout<<"\nAverage run : "<<avg;
	}
	void bestperformance()
	{
		best=0;
		for(i=0;i<n;i++)
		{
			if(best<run[i])
			{
				best=run[i];
			}
		}
	}
}
;
class cricketer : public batsman
{
	public:
		void display()
		{ 
			cout<<"\n========== Details ==========\n";
			cout<<"\nNo of match :"<<n;
			cout<<"\nRun of each match : ";
			for(i=0;i<n;i++)
			{   
				cout<<"\n";
				cout<<run[i];
			}
			cout<<"\nTotal run : "<<add;
			cout<<"\nAverage runs : "<<avg;
			cout<<"\nBest performance : "<<best;
		}
};
main()
{
	cricketer c;
	c.getinfo();
	c.total();
	c.averagerun();
	c.bestperformance();
	c.display();
}
