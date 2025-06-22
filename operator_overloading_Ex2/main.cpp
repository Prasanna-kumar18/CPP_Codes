#include <iostream>

using namespace std;


class Number
{

    int value;

    public:

    Number(int a=0) : value(a)
    {

    }

    Number operator*(const Number &n)
    {
        Number temp;

        temp.value = value * n.value;

        return temp;
    }

    void display()
    {
        cout<<value<<endl;
    }

};

int main()
{
    Number num1(10), num2(5), num3;


    num3 = num1 * num2;

    num1.display();
    num2.display();

    cout<<"The result is: ";

    num3.display();

    return 0;
}
