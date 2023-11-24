#include <iostream>

using namespace std;

class student
{
    int Rno;
    string Name;
    float Marks;

public:
    student()         //Constructor
    {
        cout<<"Enter the Rno "<<endl;
        cin>>Rno;
        cout<<"Enter the Name "<<endl;
        cin>>Name;
        cout<<"Enter the Marks "<<endl;
        cin>>Marks;
    }

    void Display()
    {
        cout<<"Rno "<<Rno<<" Name "<<Name<<" Marks "<<Marks<<endl;

    }
};

int main()
{
    student obj; //Constructor will be called

    obj.Display();

}
