//Write a program to swap the two numbers using friend function without using third variable 

#include<iostream>
using namespace std;
class swapp
{
	private:
		int a,b;
		
		public:
		swapp()
		{
			cout<<"enter a = "; //get two number from user
			cin>>a;
			cout<<"enter b = ";
			cin>>b;
			a=a+b;             //code to swap number wthout using third var.
			b=a-b;
			a=a-b;
		}
		friend void print(swapp &s); // friend func.
};
void print(swapp &s)
{

	cout<<"After swaping";
	cout<<"\na = "<<s.a;
	cout<<"\nb = "<<s.b;
}
main()
{
	swapp s;
	print(s);
	
}
