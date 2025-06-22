#include <iostream>

using namespace std;


void add(int a, int b)
{
    cout<<"The add of two integers is: "<<a+b<<endl;
}

void add(double a, double b)
{
    cout<<"The add of two float is: "<<a+b<<endl;
}

void add(int a, double b)
{
    cout<<"The add of double and int is: "<<a+b<<endl;
}


int main()
{
    add(5,3);
    add(5.5,9.8);
    add(10,50.65);
    return 0;
}
