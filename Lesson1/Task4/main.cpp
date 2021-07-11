#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your slary: " << endl;
    int pay = 0;
    cin >> pay;
    if (pay>1000)
    {
        if (pay<1000000)
        {
            cout << "Cool";
        }
    }
    if (pay<1001)
    {
        cout << "Work harder";
    }

    if (pay>999999)
    {
        cout << "You are millionaire";

    }
    cout << ", but you're good!";
    return 0;
}
