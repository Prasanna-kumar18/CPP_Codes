#include <iostream>

using namespace std;

class Employee
{
    public:
        string Name;
        string Designation;
        int age;

        Employee(string N, string Des, int a)  //Constructor
        {
            Name = N;
            Designation = Des;
            age = a;
        }

        void display()  //Member Function
        {
            cout<<"The name, Designation and age of Employee is ";
            cout<<Name<<", "<<Designation<<", "<<age;
        }
};


int main()
{
    Employee E1("Ashok", "Project Engineer", 38);

    E1.display();
    return 0;
}
