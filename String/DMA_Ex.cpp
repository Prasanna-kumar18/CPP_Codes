#include <iostream>
using namespace std;

int main ()
{
    //dynamic memory allocation
    // Pointer initialization to null
    int* p = NULL;

    // Request memory for the variable
    // using new operator
    p = new int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        *p=50;
        cout<<"*p is: "<<*p<<endl;
    }

    float *f = new float(78.32);

    cout<<"*f is: "<<*f<<endl;

    int *b = new int[10];

    if (!b)
        cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < 10; i++)
            b[i] = i+1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < 10; i++)
            cout << b[i] << " ";
    }

    cout<<endl;
    delete p;
    delete f;

    delete[] b;

    cout<<"*p is: "<<*p<<endl;
    cout<<"*f is: "<<*f<<endl;


}
