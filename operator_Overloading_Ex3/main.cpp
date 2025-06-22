#include <iostream>

using namespace std;

class Increment
{
    int value;

    public:

        Increment(int x=0): value(x)
        {

        }

        Increment operator++()
        {
            ++value;

            return *this;
        }

        void display()
        {
            cout<<value<<endl;
        }
};


int main()
{
    Increment num(10);

    cout<<"The original Value is: ";
    num.display();

    ++num;
    cout<<"The incremented Value is: ";
    num.display();


    return 0;
}
