#include <iostream>

using namespace std;


class Rectangle
{

    private: //Access Specifier

        float length;
        float width;
        float height;

    public:

    float CalculateArea()   //Member Functions
    {
        return length * width;
    }

    float CalculateVolume()
    {
        return length*width*height;
    }

    void get_data()
    {
        cout << "Enter the length, width and height" << endl;
        cin>>length>>width>>height;
    }

};
int main()
{
    Rectangle R1;   //Object

    R1.get_data();

    cout<<"The area of rectangle is "<<R1.CalculateArea()<<endl;
    cout<<"The volume of rectangle is "<<R1.CalculateVolume()<<endl;
    return 0;
}
