// que_1 : WAP to create simple calculator using class

#include<iostream>
using namespace std;
class calc
{
	public:
	void getdata()
	{
		float a,b;
		cout<<"Enter a and b:";
		cin>>a>>b;
		cout<<"Sum: "<<a+b;
		cout<<"\nSub: "<<a-b;
		cout<<"\nMul: "<<a*b;
		cout<<"\nDiv: "<<a/b;
	}
};
main()
{
	calc c;
	c.getdata();
}
