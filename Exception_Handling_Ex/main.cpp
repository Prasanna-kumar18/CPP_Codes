#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        int num,den=0;

        cin>>num;
        cin>>den;

        if(den==0)
        {
            throw runtime_error("Division cannot be done with zero denominator");
        }
        else
        {
            cout<<num/den;
        }
    }

    catch (exception &e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }

    return 0;
}
