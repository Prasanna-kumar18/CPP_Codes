#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> S;   //Creating a stack of integer values with the name S

    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(65);

    cout<<"The size of the stack is: "<<S.size()<<endl;

    while(!S.empty())
    {
      cout<<"The top value is: "<<S.top()<<endl;

      S.pop();
    }



    return 0;
}
