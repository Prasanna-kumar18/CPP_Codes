#include <iostream>

using namespace std;


class volume
{

    public:
        float length;
        float breadth;
        float height;

    void vol_reactangle()
    {
        cout<<"The volume of rectangle is "<<length*breadth*height<<endl;
    }

    void area_triangle()
    {
        cout<<"The area of triangle is "<<0.5*breadth*height<<endl;
    }

    void area_rectangle()
    {
        cout<<"The area of rectangle is "<<length*breadth<<endl;
    }
};
int main()
{
    volume obj;

    cout<<"Enter the value of Len, Brea, height: ";
    cin>>obj.length>>obj.breadth>>obj.height;

    obj.vol_reactangle();
    obj.area_rectangle();
    obj.area_triangle();
    return 0;
}
