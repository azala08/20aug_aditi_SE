/* que_8 : Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */	

#include<iostream>
using namespace std;
class cal
{
	public:
	void calc(int a,int b)
	{
		cout<<"Enter a and b: ";
		cin>>a>>b;
		cout<<"sum:"<<a+b<<endl;
		cout<<"sub:"<<a-b<<endl;
		cout<<"mul:"<<a*b<<endl;
	}
	void calc(double c,double d)
	{
		cout<<"\nEnter c and d:";
		cin>>c>>d;
		cout<<"div:"<<c/d;
	}	
};
main()
{   
	cal c;
	c.calc(10, 13);
	c.calc(8.89, 45.898);	
}
