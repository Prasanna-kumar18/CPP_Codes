#include <iostream>

using namespace std;

class temp
{
    public:

        temp()  //constructor
        {
            cout<<"The constructor is called"<<endl;
        }

        ~temp() //Destructor
        {
            cout<<"The Destructor is called"<<endl;
        }
};

int main()
{
    temp t1;
    temp t2;
    return 0;
}
