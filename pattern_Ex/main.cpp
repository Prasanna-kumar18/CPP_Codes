/*
Pattern printing

*****
****
***
**
*





#include <iostream>

using namespace std;

int main()
{

    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}




//Inverted Pyramid


* * * * *
 * * * *
  * * *
   * *
    *


#include <iostream>

using namespace std;

int main()
{
    int space;

    for(int i=5; i>=1; i--)
    {
        for(space=0;space < 5-i;space++)
            cout<<" ";
        for(int k=0; k<=i-1;k++)
            cout<<" *";
        cout<<endl;
    }
}*/



cout<<"Enter the elements"<<endl;

for(int i=0;i<5;i++)
{
    cin>>a[i];
}

