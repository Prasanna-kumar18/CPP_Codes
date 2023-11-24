#include <iostream>

using namespace std;

class car
{
public:

    string Manufac;
    string Model;
    int year;


    car()
    {
        cout<<"Enter the Manufacturer name "<<endl;
        cin>>Manufac;
        cout<<"Enter the Model name "<<endl;
        cin>>Model;
        cout<<"Enter the Manufactured Year "<<endl;
        cin>>year;
    }
    void display()
    {
        cout<<"Car Manufacturer is "<<Manufac<<endl;
        cout<<"Car Model is "<<Model<<endl;
        cout<<"manufactured year is "<<year<<endl;
    }
};

int main()
{
    int user_year;
    car c1[5];
    cout<<"Enter the year: "<<endl;
    cin>>user_year;
    for(int i=0;i<5;i++)
    {
        if(user_year==c1[i].year)
            c1[i].display();
    }

}
