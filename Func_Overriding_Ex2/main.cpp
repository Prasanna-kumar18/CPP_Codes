#include <iostream>

using namespace std;

class Animal
{
public:

    virtual void Sound()
    {
        cout<<"The animal makes sound"<<endl;
    }
};

class Dog : public Animal
{
public:

    void Sound() override
    {
        cout<<"The Dog makes Bark sound"<<endl;
    }
};

class Cat : public Animal
{
public:

    void Sound() override
    {
        cout<<"The Cat makes Meow sound"<<endl;
    }
};

int main()
{
    Animal A;
    Dog D;
    Cat C;

    A.Sound();
    D.Sound();
    C.Sound();
    return 0;
}
