#include <iostream>

using namespace std;

int main()
{
    //Method 3
    int *ptr = new int[5];

    cout<<"Enter the values: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>> ptr[i];
    }

    cout<<"The values are: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete[] ptr;
    return 0;
}
