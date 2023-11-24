#include <iostream>

using namespace std;

int main()
{

    string a;
    cin>>a;
    cout<<a<<endl;

    string b;
    getline(cin,b);
    cout<<b<<endl;

    string First_Name = "Skill";
    string Last_Name = "Lync";
    string Full_Name = First_Name + Last_Name;
    cout<<Full_Name<<endl;

    string first = "Prasanna";
    string last = "Kumar";
    string full = first.append(last);
    cout<<full<<endl;

    cout<<"The length of String is "<<(full.length())<<endl;

    cout<<first[0];

    //prasannakumarS

    //Inserting a character at last

    full.push_back('S');

    cout<<full<<endl;
}
