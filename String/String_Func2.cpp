#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
// Initializing string

string s1("12345");
string s2("abcde");

cout<<"S1 is: "<<s1<<endl;
cout<<"S2 is: "<<s2<<endl;

s1.insert(2,s2); //12abcde345
cout<<"The new value of S1 "<<s1<<endl;

s1.erase(4,3); //12ab345
cout<<"The new value of S1 after erase "<<s1<<endl;

s2.replace(1,3,s1); //a12ab345e
cout<<"The new value of S2 "<<s2<<endl;
}
