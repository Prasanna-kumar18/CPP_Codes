#include <iostream>

using namespace std;

class Animal    //Base
{


public:

    string Species;

    Animal()
    {
        cout<<"Enter the species name: ";
        cin>>Species;
    }

    void display_species()
    {
        cout<<"The species name is: "<<Species<<endl;
    }

};

class Dog : public Animal   //Derived 1
{

public:

    string Breed;

    Dog()
    {
        cout<<"Enter the breed Name: ";
        cin>>Breed;
    }

    void Display_Breed()
    {
        cout<<"The Breed name is: "<<Breed<<endl;
    }


};

class Cat : public Animal   //Derived 2
{

public:

    string Color;

    Cat()
    {
        cout<<"Enter the color: ";
        cin>>Color;
    }

    void Display_Color()
    {
        cout<<"The cat color is: "<<Color<<endl;
    }

};



int main()
{
    Dog D;
    Cat C;

    D.display_species();
    D.Display_Breed();
    C.display_species();
    C.Display_Color();

    return 0;
}
