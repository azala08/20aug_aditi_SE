// que_10 : Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
using namespace std;
class con
{
	public:
	void conc(string a)
	{
		cout<<a;
	}
	void conc(char b[5])
	{
		cout<<b;
	}
};
main()
{
	con c;
	c.conc("Tops ");
	c.conc("Tech");
}
