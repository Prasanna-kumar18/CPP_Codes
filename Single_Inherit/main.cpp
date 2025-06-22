#include <iostream>

using namespace std;

class Vehicle
{
public:

    int Max_Speed;
    int Mileage;


    void get_speed()
    {
        cout<<"Enter the max speed of vehicle: ";
        cin>>Max_Speed;
    }

    void get_Mileage()
    {
    cout<<"Enter the mileage of the car: ";
    cin>>Mileage;
    }

};

class Car : public Vehicle
{
public:

    void display()
    {
        get_speed();
        get_Mileage();

        cout<<"The max speed is "<<Max_Speed<<" and Mileage is "<<Mileage<<endl;
    }
};

int main()
{
    Car C;
    C.display();
    return 0;
}
