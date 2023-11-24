#include <iostream>

using namespace std;

class Myclass
{
private:
    //Data members
    int value;
    string Mystring;
public:
    void getdata()      //Member Functions
    {
        cin>>value;
        cin>>Mystring;
    }
    void display()
    {
        cout<<"Value is: "<<value<<endl;
        cout<<"My string is: "<<Mystring<<endl;
    }
};

int main()
{
    Myclass ob1[5];
    for(int i=0;i<5;i++)
    {
        ob1[i].getdata();
        ob1[i].display();
    }
}
