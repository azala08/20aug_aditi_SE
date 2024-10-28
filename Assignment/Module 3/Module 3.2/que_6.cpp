/* que_6 : Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */ 

#include<iostream>
using namespace std;
class person
{
	public:
	string name;
	int age;
	void getdata()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter age: ";
		cin>>age;
	}
};
class stu
{
	public:
	float per;
	void stud()
	{
		cout<<"Enter percentage: ";
		cin>>per;
	}
};
class teacher 
{
	public:
	int sal;
	void salary()
	{
		cout<<"Enter salary: ";
		cin>>sal;
	}
};
class print : public person, public stu, public teacher
{
	public:
	void printdata()
	{
		cout<<"\nName: "<<name;
		cout<<"\nAge: "<<age;
		cout<<"\nPercentage: "<<per;
		cout<<"\nSalary: "<<sal;
	}
};
main() 
{
	print p;
	p.getdata();
	p.stud();
	p.salary();
	p.printdata();
}








