#include <iostream>

using namespace std;

class Engine    //Base class 1
{

public:

    int Horsepower;

    Engine()    //Constructor
    {
        cout<<"Enter the horsepower: ";
        cin>>Horsepower;
    }

    void start()
    {
        cout<<"The Engine started with "<<Horsepower<<" HP"<<endl;
    }
};

class Wheels    //Base class 2
{

public:

    int Wheel_count;

    Wheels()    //Constructor
    {
        cout<<"Enter the Wheel count: ";
        cin>>Wheel_count;
    }

    void Count()
    {
        cout<<"The vehicle has "<<Wheel_count<<" wheels"<<endl;
    }


};

class car : public Engine, public Wheels    //Derived class
{
public:

    string Brand;

    car()   //Constructor
    {
        cout<<"Enter the car Brand: ";
        cin>>Brand;
    }

    void display_Brand()
    {
        cout<<"The car Brand is: "<<Brand<<endl;
    }
};

int main()
{
    car C;

    C.start();
    C.Count();
    C.display_Brand();
    return 0;
}
