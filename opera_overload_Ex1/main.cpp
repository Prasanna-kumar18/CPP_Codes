#include <iostream>

using namespace std;


class value
{
    int x,y;

public:

    value(int a =0, int b=0): x(a), y(b) //operator
    {
    }

    value operator+(const value &v)
    {
        value temp;

        temp.x = x + v.x;

        temp.y = y + v.y;

        return temp;
    }

    void display()
    {
        cout<<x<<" & "<<y<<endl;
    }

};

int main()
{
    value v1(10,15), v2(4,8), v3;

    v3 = v1+v2;

    cout<<"v1 is ";
    v1.display();
    cout<<"v2 is ";
    v2.display();
    cout<<"v3 is ";
    v3.display();
    return 0;
}
