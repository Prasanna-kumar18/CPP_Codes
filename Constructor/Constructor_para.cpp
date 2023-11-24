#include <iostream>

using namespace std;

class student
{
    int Rno;
    string Name;
    float Marks;

public:
    student(int r, string s, float m)         //Constructor
    {
        Rno = r;
        Name = s;
        Marks = m;
    }

    void Display()
    {
        cout<<"Rno "<<Rno<<" Name "<<Name<<" Marks "<<Marks<<endl;

    }
};

int main()
{
    student obj[]= {student(100,"Prasanna",78.5),student(101,"kumar",93.2)}; //Constructor will be called

    obj[0].Display();
    obj[1].Display();

}
