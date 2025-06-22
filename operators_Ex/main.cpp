#include <iostream>

using namespace std;
//Arithmetic operator
int main()
{
    int a,b,c;

    cout << "Enter the values for a, b" << endl;
    cin>>a>>b;  //10,5
/*
    cout<<"The addition of two numbers is "<<a+b<<endl;//15
    cout<<"The sub of two numbers is "<<a-b<<endl;//5
    cout<<"The multiplication of two numbers is "<<a*b<<endl;//50
    cout<<"The division of two numbers is "<<a/b<<endl;//2
    cout<<"The modulus of two numbers is "<<a%b<<endl;//0

    cout<<"The pre inc of a is "<<++a<<endl;//11
    cout<<"The post inc of a is "<<a++<<endl;//11

    cout<<"The pre dec of b is "<<--b<<endl;//4
    cout<<"The post dec of a is "<<b--<<endl;//4
    return 0;


    //Assignment operator

    a = 20;
    b = 8;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    a+=5;

    cout<<"The new value of a is "<<a<<endl;

    b-=3;

    cout<<"The new value of b is "<<b<<endl;



//Bitwise operator
    int c = a&b;
    cout<<"The bitwise AND of a and b is "<<c<<endl;//0
    c = a|b;
    cout<<"The bitwise OR of a and b is "<<c<<endl;//15
    c = a^b;
    cout<<"The bitwise EXOR of a and b is "<<c<<endl;//15

    cout<<"The not of a is "<<~a<<endl;

    cout<<"The not of b is "<<~b<<endl;



//Logical operator & Relational operator

    if(a>b && a>c)
    {
        cout<<"a is greater"<<endl;
    }
    else if(b>c && b>a)
    {
        cout<<"b is greater"<<endl;
    }
    else
    {
        cout<<"c is greater"<<endl;
    }

    return 0;
*/
//Relational operator

    if(a>0 && b>0)
    {
        cout<<"Both a and b is positive"<<endl;
    }
    else if(a<0 && b>0)
    {
        cout<<"a is negative and b is positive"<<endl;
    }
    else if(a>0 && b<0)
    {
        cout<<"a is positive and b is negative"<<endl;
    }
    else if(a==0 && b==0)
    {
        cout<<"Both a and b is zero"<<endl;
    }
    else if((a==0 && b==0) || (a==0 && b<0) || ()
    {
        cout<<"a is zero"<<endl;
    }
    else
    {
        cout<<"Both a and b is negative"<<endl;
    }

}




/*1. Check the given two numbers are either positive or negative or
    zero

  2. Convert the decimal number into binary number using bitwise
  operator.
