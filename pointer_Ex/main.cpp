#include <iostream>

using namespace std;

void square(int *ptr);

int main()
{
    int arr[5] = {1,2,3,4,5};

    square(arr);
}

void square(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        cout<<((*(ptr+i))*((*(ptr+i))))<<endl;
    }
}
