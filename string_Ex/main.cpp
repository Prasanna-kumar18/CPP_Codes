#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str1 = "C++ programming";
    string str2 = "string ";

    //C++ string programming

    str1.insert(4,str2);

    cout<<"Insert: "<<str1<<endl;

    //C++ Arrays programming

    str1.replace(4,6,"Arrays ");

    cout<<"Replace: "<<str1<<endl;

    //C++ programming

    str1.erase(4,7);

    cout<<"Erase: "<<str1<<endl;

    return 0;
}
