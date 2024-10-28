// que_4 : Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class calc
{
	public:
	int a,b;
	calc()  //same as class name
	{
		cout<<"Enter a and b:";
		cin>>a>>b;
		cout<<"\nSum : "<<a+b;
		cout<<"\nSub : "<<a-b;
		cout<<"\nMul : "<<a*b;
		cout<<"\nDiv : "<<a/b;		
	}	
};
main()
{
	calc c;   //Using constructor
}
