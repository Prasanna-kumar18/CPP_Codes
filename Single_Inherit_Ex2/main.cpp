#include <iostream>

using namespace std;

class Employee
{

protected:

    string Name;
    int Emp_ID;

public:

    void get_data()
    {
        cout<<"Enter the name of the employee";
        cin>>Name;
        cout<<"Enter the Employee ID";
        cin>>Emp_ID;

    }

};

class Manager : public Employee
{
public:

void print()
{
    cout<<"The Employee name is "<<Name<<endl;
    cout<<"The ID number is "<<Emp_ID<<endls;
}

};

int main()
{
    Manager M;

    M.get_data();
    M.print();
    return 0;
}
