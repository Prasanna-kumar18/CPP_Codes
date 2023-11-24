#include <iostream>

using namespace std;

class test
{
public:

    test()
    {
        cout<<"Constructor called"<<endl;
    }

    test(const test&t)
    {
        cout<<"Copy constructor called"<<endl;
    }

    test&operator =(const test&t6)
    {
        cout<<"Assignment operator called"<<endl;
    }
};

int main()
{
    test t1,t3;
    test t2=t1;     //copy constructor

    t3 = t1;        //Assignment Operator.
}
