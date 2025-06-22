#include <iostream>

using namespace std;

int main()
{
    int n, rem,temp;
    int sum = 0;

    cout << "Enter a number :" << endl;
    cin >> n;//153

    temp=n;

    while(n > 0)
    {
        rem = n%10;
        sum += (rem*rem*rem);
        n = n/10;
    }

    if(temp == sum)
    {
        cout << "The entered number is an Armstrong number" << endl;
    }
    else
    {
        cout << "The entered number is not an Armstrong number" << endl;
    }

    return 0;
}
