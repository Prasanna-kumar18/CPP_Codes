#include <iostream>

using namespace std;

class Myclass
{
public:
    //Data members
    int value;
    string Mystring;
};

int main()
{
    Myclass ob1, ob2;   //Objects
    ob1.value = 10;
    ob1.Mystring = "Hi";
    ob2.value = 20;
    ob2.Mystring = "Hello";
    cout<<"ob1.value "<<ob1.value<<endl;
    cout<<"ob1.String "<<ob1.Mystring<<endl;
    cout<<"ob2.value "<<ob2.value<<endl;
    cout<<"ob2.String "<<ob2.Mystring<<endl;

}
