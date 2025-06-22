#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<float> MyList;

    MyList.push_back(10.5);
    MyList.push_back(20.8);
    MyList.push_front(50.6);
    MyList.push_back(60.3);
    MyList.push_front(30.9);

    cout<<"The Elements are: "<<endl;

    for(float val:MyList)
    {
        cout<<val<<endl;
    }

    MyList.remove(50);

    MyList.reverse();

    cout<<"After removing the Elements are: "<<endl;
    for(float val:MyList)
    {
        cout<<val<<endl;
    }

    return 0;
}
