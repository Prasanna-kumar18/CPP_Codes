#include <iostream>

using namespace std;

class student   //base Class
{
protected:

    string Name;
    string Department;

public:

    void get_data()
    {
        cout<<"Enter the name of the student: ";
        cin>>Name;
        cout<<"Enter the Department: ";
        cin>>Department;
    }
};

class Teacher : public student //Derived Class
{
public:

    void get_data_T()
    {
        cout<<"Enter the name of the Teacher: ";
        cin>>Name;
        cout<<"Enter the Department: ";
        cin>>Department;
    }

    void print()
    {
        cout<<"The name is: "<<Name<<endl;
        cout<<"The Department is "<<Department<<endl;
    }

};

int main()
{
    Teacher T1,T2;

    T1.get_data();  //Student
    T2.get_data_T();    //Teacher
    T1.print();
    T2.print();


    return 0;
}
