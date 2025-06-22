#include <iostream>

using namespace std;

float area(float len)
{
    return len*len;
}

float area(float len, float bre)
{
    return len*bre;
}

float area(float len, float bre, float hei)
{
    return len*bre*hei;
}

int main()
{
    float len, brea,heig;
    cout << "Enter the length, breadth and height" << endl;
    cin>>len>>brea>>heig;

    cout<<"The area of square is: "<<area(len)<<endl;
    cout<<"The area of rectangle is: "<<area(len,brea)<<endl;
    cout<<"The volume of rectangle is: "<<area(len,brea,heig)<<endl;
    return 0;
}
