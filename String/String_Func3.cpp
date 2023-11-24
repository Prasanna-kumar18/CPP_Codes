#include <iostream>

using namespace std;

int main()
{

    string s1("Hello");
    string s2;

    cout<<"Size of S1 is: "<<s1.size()<<endl;
    cout<<"Length of S1 is: "<<s1.length()<<endl;
    cout<<"Max size of s1 is: "<<s1.max_size()<<endl;
    s1.resize(50);
    cout<<"The new Size of S1 is: "<<s1.size()<<endl;
    cout<<"Capacity of S1 is: "<<s1.capacity()<<endl;
    cin>>s2;
    int result = s1.compare(s2);
    if(result==0)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;
}
