#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your slary: " << endl;
    int pay = 0;
    cin >> pay;
    int marker = 0;
    if (pay>999999)
    {
        cout << "You are millionaire";
        marker ++;

    }
    if (marker < 1)
    {
        if (pay>1000)
        {
            cout << "Cool";
        }
        if (pay<1001)
        {
            cout << "Work harder";
        }
    }
    cout << ", but you're good!";
    return 0;
}
