#include <iostream>

using namespace std;

class Student_Details
{
private:

    string Name;
    float Total_marks;
public:
    void getdata()
    {
        cout<<"Enter the student name "<<endl;
        cin>>Name;
        cout<<"Enter Student total Marks "<<endl;
        cin>>Total_marks;

    }
    void display()
    {
        cout<<"The student name is "<<Name<<endl;
        cout<<"The mark scored is "<<Total_marks<<endl;
    }

    int marks()
    {
        return Total_marks;
    }

};

int main()
{
    int max=0;
    Student_Details obj[5];
    for(int i=0;i<5;i++)
    {
        obj[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        if(obj[i].marks() > obj[max].marks())
            max=i;
    }

        obj[max].display();


}
