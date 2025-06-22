#include <iostream>

using namespace std;

class one
{

    public:     //Access Specifier

        int a,b;    //Data members


    void first()    //Member functions
    {
        cout<<"a and b is "<<a<<","<<b<<endl;
    }

    void add()
    {
        cout<<"a + b is "<<a+b<<endl;
    }

    void sub()
    {
        cout<<"a - b is "<<a-b<<endl;
    }


};


int main()
{
    one obj;

    obj.a = 10;
    obj.b = 5;

    obj.first();
    obj.add();
    obj.sub();

    return 0;
}
