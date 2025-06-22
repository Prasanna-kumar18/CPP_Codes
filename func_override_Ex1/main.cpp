#include <iostream>

using namespace std;

class Base
{
public:

    virtual void Display()
    {
        cout<<"This is Base class Display"<<endl;
    }
};

class Derived : public Base
{
public:

    void Display() override
    {
        cout<<"This is Derived class Display"<<endl;
    }
};

int main()
{
    Derived D;
    Base B;

    B.Display();
    D.Display();
    return 0;
}
