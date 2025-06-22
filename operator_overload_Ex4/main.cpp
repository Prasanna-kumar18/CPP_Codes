#include <iostream>

using namespace std;

class Complex
{

    float real, imag;

    public:

        Complex() : real(0), imag(0)
        {

        }

        Complex(float r, float i) : real(r), imag(i)
        {

        }

        Complex operator+(const Complex &c)
        {
            Complex temp;

            temp.real = real + c.real;

            temp.imag = imag + c.imag;

            return temp;
        }

        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }


};


int main()
{

    Complex C1(10.5,3.2), C2(6.5,4.6), C3;

    C3 = C1+C2;

    cout<<"C1 ";
    C1.display();
    cout<<"C2 ";
    C2.display();
    cout<<"C3 ";
    C3.display();

    return 0;
}
