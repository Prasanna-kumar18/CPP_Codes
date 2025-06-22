#include <iostream>

using namespace std;


class Student
{
    private:

        int Roll_No;

    public:

        string Name;

        void SetRollNo(int roll)
        {
            if(roll>0)
            {
                Roll_No = roll;
            }
            else
            {
                cout<<"Invalid Roll Number!"<<endl;
            }
        }

        void Display()
        {
            cout<<"Name : "<<Name<<" Roll No: "<<Roll_No<<endl;
        }


};

int main()
{
    Student S1,S2;


    S1.Name = "Aakash"; //Public

    S1.SetRollNo(100);  //private

    S1.Display();

    S2.Name = "Santhosh"; //Public

    S2.SetRollNo(101);  //private

    S2.Display();

    return 0;
}
