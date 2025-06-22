#include <iostream>

using namespace std;

class Animal    //Base class
{
public:

    string Species;

    Animal()    //Constructor
    {
        cout<<"Enter the Species name: ";
        cin>>Species;
    }

    void Display_Species()
    {
        cout<<"The Species is: "<<Species<<endl;
    }
};

class Mammal : public Animal    //Mammal(Derived) Animal (Base)
{
public:

    int Lifespan;

    Mammal()    //Constructor
    {
        cout<<"Enter the Life span: ";
        cin>>Lifespan;
    }

    void Display_Lifespan()
    {
        cout<<"The Lifespan is: "<<Lifespan<<endl;
    }
};

class dog : public Mammal   //dog(derived) Mammal(Base)
{

public:

    string Breed;

    dog()   //Constructor
    {
        cout<<"Enter the Breed: ";
        cin>>Breed;
    }

    void Display_breed()
    {
        cout<<"The Breed is: "<<Breed<<endl;
    }

};

int main()
{
    dog D;

    D.Display_Species();
    D.Display_Lifespan();
    D.Display_breed();
    return 0;
}
