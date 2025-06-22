#include <iostream>

using namespace std;

class Calculate
{
private:

    double Length;
    double Breadth;
    double Height;

public:
    Calculate(double l, double B, double H) //Constructor
    {
        Length = l;
        Breadth = B;
        Height = H;
    }

    friend void CalculateVolume(Calculate obj);
};

void CalculateVolume(Calculate obj) //Function
{
    cout<<"The volume is: "<<obj.Length * obj.Breadth * obj.Height<<endl;
}

int main()
{
    Calculate C(5.5,4.8,6.5); //Parameterized constructor

    CalculateVolume(C); //Function calling
    return 0;
}
