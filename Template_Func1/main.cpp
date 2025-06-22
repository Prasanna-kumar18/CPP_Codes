#include <iostream>

using namespace std;

template<typename T1, typename T2>
T2 add(T1 x, T2 y)
{
    return x+y;
}


int main()
{
    cout<<"Sum of integer is: "<<add(10,5.6)<<endl;
    cout<<"Sum of Float is: "<<add(25.5,12.8)<<endl;
    return 0;
}
