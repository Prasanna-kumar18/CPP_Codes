#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *ptr;
    int max, min;

    ptr = (int *)malloc(5*sizeof(int));

    if(ptr == NULL)
    {
        cout << "Memory is not allocated" << endl;

    }
    else
    {
        cout << "Enter the values :";

        for(int i = 0; i < 5; i++)
        {
            cin >> *(ptr + i);
        }
    }

    cout << " The values of ptr is : " << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
         if(*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }

    cout << "----------Maximum----------" << endl;

    max = *(ptr + 0);

    for(int i = 1; i < 5; i++)
    {

    }

    cout << "Maximum = " << max << endl;

    cout << "----------Minimum----------" << endl;

    min = *(ptr + 0);

    for(int i = 1; i < 5; i++)
    {

    }

    cout << "Minimum = " << min << endl;

    return 0;
}
