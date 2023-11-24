#include <iostream>

using namespace std;

class Myclass
{
public:
    int x,y;

    Myclass(int a, int b)
    {
        cout<<"Constructor called"<<endl;
        x=a;
        y=b;
    }

    Myclass(const Myclass&cp)
    {
        cout<<"Copy Constructor called"<<endl;
        x = cp.x + 5;
        y = cp.y + 5;
    }
};

int main()
{
    Myclass ob1(10,5);
    Myclass ob2 = ob1;  //Copy Constructor

    cout<<ob1.x<<endl;
    cout<<ob1.y<<endl;
    cout<<ob2.x<<endl;
    cout<<ob2.y<<endl;
}
