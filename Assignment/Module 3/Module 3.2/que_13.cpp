// que_13 : Write a program to find the max number from given two numbers using friend function 

#include <iostream>
using namespace std;

class maxnum
{
    private:
    int a,b;

    public:
    maxnum()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;
    }
    friend void print(maxnum &m);
};

void print(maxnum &m)
{
    if (m.a > m.b)
    {
        cout<<m.a;
        cout<<" is max";
    }
    else
    {
        cout<<m.b;
		cout<<" is max";
    }
}

int main()
{
    maxnum m;
    print(m);
}
