#include <iostream>

using namespace std;

template<typename T>

T Max_value(T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
    int I_val1, I_val2;
    cout<<"Enter two integer value: ";
    cin>>I_val1>>I_val2;
    cout<<"The max integer value is: "<<Max_value(I_val1,I_val2)<<endl;

    double D_val1, D_val2;
    cout<<"Enter two float value: ";
    cin>>D_val1>>D_val2;
    cout<<"The max float value is: "<<Max_value(D_val1,D_val2)<<endl;

    char C_val1, C_val2;
    cout<<"Enter two character value: ";
    cin>>C_val1>>C_val2;
    cout<<"The max character is: "<<Max_value(C_val1,C_val2)<<endl;

    string S_val1, S_val2;
    cout<<"Enter two String value: ";
    cin>>S_val1>>S_val2;
    cout<<"The max String value is: "<<Max_value(S_val1,S_val2)<<endl;
    return 0;
}
