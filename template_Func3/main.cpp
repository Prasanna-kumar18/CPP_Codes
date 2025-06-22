#include <iostream>

using namespace std;

template<typename T1, typename T2>
    auto add(T1 a, T2 b)->decltype(a+b)
    {
        return a+b;
    }


int main()
{
    int I_val1;
    float F_val2;
    short sh_Val3;

    cout<<"Enter the int and float numbers: ";
    cin>>I_val1>>F_val2;

    cout<<"The addition of int and float is: "<<add(I_val1,F_val2); //int, float

    cout<<"The addition of float and int is: "<<add(F_val2,I_val1); //float, int

    cout<<"Enter the short value: ";
    cin>>sh_Val3;

    cout<<"The addition of short and int is: "<<add(sh_Val3,I_val1);//short, int
    return 0;
}
