#include <iostream>

using namespace std;

class student
{
private:
    int Rno;
    string Name;
    int Marks;
public:
    void getdata()
    {
        cout<<"Enter the student RNo :"<<endl;
        cin>>Rno;
        cout<<"Enter the student name :"<<endl;
        cin>>Name;
        cout<<"Enter the marks "<<endl;
        cin>>Marks;

    }

    friend void Calculate(student[]);        //Friend Function
};
    void Calculate(student s[])
    {
        for(int i=0;i<3;i++)
        {
            if(s[i].Marks>90)
            {
                cout<<"Roll number is: "<<s[i].Rno<<endl;
                cout<<"student Name is: "<<s[i].Name<<endl;

            }
        }
    }
int main()
{
    student obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].getdata();
    }

    Calculate(obj);
}
