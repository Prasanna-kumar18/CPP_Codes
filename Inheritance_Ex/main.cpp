#include <iostream>

using namespace std;

class Animal  //Base class
{
public:

    void eat()
    {
        cout<<"This animal can eat"<<endl;
    }

    void sleep()
    {
        cout<<"This animal can sleep"<<endl;
    }
};

class Dog : public Animal
{
public:

    void bark()
    {
        cout<<"This animal can Bark"<<endl;
    }

};

int main()
{
    Dog D1;

    D1.bark();
    D1.eat();
    D1.sleep();


    return 0;
}
