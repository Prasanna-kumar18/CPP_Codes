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
            cout<<Name<<", "<<Designation<<", "<<age<<endl<<endl;
        }

        ~Employee()     //Destructor
        {

        }
};

int main()
{

    Employee E1("Karthik","Manager",42);

    Employee E2 = E1;   //Copy constructor

    E1.display();
    E2.display();
    return 0;
}
