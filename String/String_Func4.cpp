#include <iostream>

using namespace std;

int main()
{

    string s1("This is cpp programming");
    for(int i=0;i<s1.length();i++)
    {
        cout<<s1.at(i); //s1[i];
    }
    cout<<endl;
    int x;

    x = s1.find("cpp");
    cout<<x<<endl;

    x = s1.find_first_of('i');
    cout<<"The first i appears at "<<x<<endl;

    x = s1.find_last_of('m');
    cout<<"The last m appears at "<<x<<endl;
}

