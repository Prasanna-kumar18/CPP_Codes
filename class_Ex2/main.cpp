#include <iostream>

using namespace std;

class sum
{
    public:

        int a,b;

    void get_value(int x, int y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout<<"The addition of two num is "<<a+b;
    }
};


int main()
{
    sum total;

    total.get_value(10,5);
    total.add();
    return 0;
}
