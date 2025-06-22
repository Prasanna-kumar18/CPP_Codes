#include <iostream>

using namespace std;

class Student
{

    public:
        int R_No;
        string Name;
        float Marks;

    Student()       //Constructor
    {
        cout<<"Enter the Roll No of Student: ";
        cin>>R_No;
        cout<<"Enter the name of the Student: ";
        cin>>Name;
        cout<<"Enter the total mark: ";
        cin>>Marks;
    }

    void display()  //Member Function
    {
        cout<<"The roll No, Name and Mark of the student is: "<<R_No<<", "<<Name<<", "<<Marks<<endl;
    }
};

int main()
{
    Student s1[3]; //Object Creation

    for(int i=0;i<3;i++)
    s1[i].display();

    return 0;
}
