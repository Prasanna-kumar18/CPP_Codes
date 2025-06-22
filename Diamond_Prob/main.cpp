#include <iostream>

using namespace std;

class Base
{
    public:

        void Display()
        {
            cout<<"base class:"<<endl;
        }

};

class Derived1 : virtual public Base
{
public:
};

class Derived2 : virtual public Base
{
public:
};

class Derived3 : public Derived1, public Derived2
{
public:
};



int main()
{
    Derived3 D;

    D.Display();
    return 0;
}







