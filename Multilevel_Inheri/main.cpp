#include <iostream>

using namespace std;

class Animal    //base Class
{

public:

    string species;

    Animal()
    {
        cout<<"Enter the species: ";
        cin>>species;
    }

    void display_species()
    {
        cout<<"The species is: "<<species<<endl;
    }
};

class Mammal : public Animal
{
    public:

        int Lifespan;

        Mammal()
        {
            cout<<"Enter the lifespan: ";
            cin>>Lifespan;
        }

        void Display_Lifespan()
        {
            cout<<"The Lifespan is: "<<Lifespan<<endl;
        }

};

class dog : public Mammal
{

public:

    string Breed;

    dog()
    {
        cout<<"Enter the Breed: ";
        cin>>Breed;
    }

    void Display_Breed()
        {
            cout<<"The Breed is: "<<Breed<<endl;
        }

};

int main()
{
    dog D;

    D.display_species();
    D.Display_Lifespan();
    D.Display_Breed();
    return 0;
}
