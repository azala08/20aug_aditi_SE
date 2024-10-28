/* que_7 : Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance) */

#include<iostream>
using namespace std;
class student
{
		public:
		int rno[5],n,i;
		void rollno()
		{
			cout<<"Enter number of student:";
			cin>>n;
			for(i=0;i<n;i++)
			{	
				cout<<"Enter rno:";
				cin>>rno[i];
			}	
		}	
};
class test: public student
{
    public:
    int sub1[5], sub2[5];
    void marks()
    {
        cout<<"\nEnter marks"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter rno "<<rno[i];
			cout<<" 1st subject marks: ";
            cin>>sub1[i];
            cout<<"Enter rno "<<rno[i];
			cout<<" 2nd subject marks: ";
            cin>>sub2[i];
        }
    }
};

class result: public test
{
    public:
    void display()
    {
        cout<<"========== Rseult =========="<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Roll number: "<<rno[i]<<endl;
            cout<<"Sub1 marks: "<<sub1[i]<<endl;
            cout<<"Sub2 marks: "<<sub2[i]<<endl;
            cout<<"Total marks: "<<sub1[i] + sub2[i]<<endl;
            cout<<"\n";
        }        
    }
};

main()
{
    result a;
    a.rollno();
    a.marks();
    a.display();
}
