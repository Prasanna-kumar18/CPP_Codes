#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> MyQueue;     //STL

    int val,n;

    cout<<"Enter the no of  elements: ";
    cin>>n;

    cout<<"Enter the elements"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>val;
        MyQueue.push(val);
    }

    cout<<"The size of queue is: "<<MyQueue.size()<<endl;

cout<<"The elements are: "<<endl;
    while(!MyQueue.empty())
    {
        cout<<MyQueue.front()<<endl;

        MyQueue.pop();
    }



    return 0;
}
