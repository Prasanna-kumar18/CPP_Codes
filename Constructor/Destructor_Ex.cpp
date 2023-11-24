#include <iostream>

using namespace std;

class student
{
public:

    string Name;

    student()
    {
        Name = "Prasanna";
        cout<<"Constructor called "<<endl;
    }
    ~student()
    {
        cout<<"Destructor Called "<<endl;
    }
};

int main()
{
    student s1,s2;

    cout<<s1.Name<<endl;
    cout<<s2.Name<<endl;
}
