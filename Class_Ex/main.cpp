#include <iostream>

using namespace std;

class one   //class
{
    public: //Access specifier
        int val;    //Data member

    void print()    //Member function
    {
        cout<<"The value is: "<<val<<endl;
    }
};

int main()
{
    one obj;

    obj.val = 100;

    obj.print();
    return 0;
}
