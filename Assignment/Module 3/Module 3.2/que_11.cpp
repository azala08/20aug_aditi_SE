/* que_11 : Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
=> Rectangle: Area * breadth 
=> Triangle: ½ *Area* breadth 
=> Circle: Pi * Area *Area */

#include<iostream>
using namespace std;
class calc
{
	public:
	void cal(int a)
	{
		cout<<"Enter value of a:";
		
		cin>>a;
		cout<<"Area of circle is: "<<3.14*a*a<<endl;
	}
	void cal(double a,double b)
	{
		cout<<"Enter value of a and b: ";
		cin>>a>>b;
		cout<<"Area of rectangle is: "<<a*b<<endl;
	}
	void cal(float a,float b,float c=1/2)
	{
		cout<<"Enter value of a and b: ";
		cin>>a>>b; 
		cout<<"Area of Triangle is: "<<c*a*b<<endl;
	}
};
main()
{
	calc c;
	c.cal(10);
	c.cal(1234.45,2356.43);
	c.cal(1.2, 3.4, 6.5);
}
