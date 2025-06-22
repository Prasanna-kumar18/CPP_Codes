#include <iostream>

using namespace std;

class Engine    //Base class 1
{

public:

    int Horsepower;

    Engine()        //Constructor
    {
        cout<<"Enter the horsepower: ";
        cin>>Horsepower;
    }

    void start()
    {
        cout<<"The Engine started with "<<Horsepower<<" HP"<<endl;
    }
};

class Wheels    //Base Class 2
{

public:

    int Wheel_Count;

    Wheels()        //Constructor
    {
        cout<<"Enter the Wheel Count: ";
        cin>>Wheel_Count;
    }

    void Count()
    {
        cout<<"The vehicle has "<<Wheel_Count<<" wheels"<<endl;
    }

};


class car : public Engine, public Wheels    //Derived Class
{

public:

    string Brand;

    car()
    {
        cout<<"Enter the Brand Name: ";
        cin>>Brand;
    }
    void display()
    {
        cout<<"The car Brand is "<<Brand<<endl;
    }
};


int main()
{
    car C;

    C.start();
    C.Count();
    C.display();
    return 0;
}
