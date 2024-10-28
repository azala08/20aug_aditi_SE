// que_9 : Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class matrix
{
	public:
	int i,n,m1[5],m2[5],m3;
	
	void getm()
	{
		cout<<"Enter number of matrix1:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter matrix:";
			cin>>m1[i];
		}
		cout<<"Enter number of matrix2:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter matrix:";
			cin>>m2[i];
		}
		cout<<"\n";
	}
};  
class cal:public matrix
{
	public:
	void printm()
	{
		cout<<"Addition of matrix:"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<m1[i] + m2[i];
		}	
	}	
};
main()
{
	cal c;
	c.getm();
	c.printm();
}







