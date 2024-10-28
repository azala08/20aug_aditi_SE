// que_3 : Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

class values
{
    public:
    int mul(int a,int b)
    {
        return a*b;
    }

    int cubic(int i)
    {
        return i*i*i;
    }
};

int main()
{
    int no1,no2;
    cout<<"Enter first value:";
    cin>>no1;
    cout<<"Enter second value:";
    cin>>no2;
    values v;
    cout<<"Multiplication = "<<v.mul(no1, no2)<<endl;
    cout<<"cubic value = "<<v.cubic(no1);
}

