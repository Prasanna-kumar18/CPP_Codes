#include <iostream>

using namespace std;

class Animal    //Base class
{

public:

    string Species;

    Animal()
    {
        cout<<"Enter the species name: ";
        cin>>Species;
    }

    void display_Species()
    {
        cout<<"The species name is: "<<Species<<endl;
    }

};

class Dog : public Animal   //Derived class 1
{


public:

    string Breed;

    Dog()
    {
        cout<<"Enter the Breed name: ";
        cin>>Breed;
    }

    void display_Breed()
    {
        cout<<"The Breed name is: "<<Breed<<endl;
    }

};


class Cat  : public Animal  //Derived Class 1
{

public:

    string Color;

    Cat()
    {
        cout<<"Enter the Cat Color: ";
        cin>>Color;
    }

    void display_Color()
    {
        cout<<"The Cat Color is: "<<Color<<endl;
    }

};


class four_Leg : public Dog

int main()
{
    Dog D;
    Cat C;

    D.display_Species();
    D.display_Breed();
    C.display_Species();
    C.display_Color();
    return 0;
}
