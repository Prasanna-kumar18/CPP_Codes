#include <iostream>

using namespace std;


class Bankaccount
{

    private:

        float balance;

    public:
        float dep;

        Bankaccount()       //constructor
        {
            cout<<"Enter the Initial balance: "<<endl;
            cin>>balance;

        }

        void deposit()
        {
            cout<<"Enter the deposit amount: "<<endl;
            cin>>dep;

            balance += dep;
        }

        void getbalance()
        {
            cout<<"The updated balance is "<<endl;
            cout<<balance;
        }

};
int main()
{
    Bankaccount B1;

    B1.deposit();
    B1.getbalance();
    return 0;
}
