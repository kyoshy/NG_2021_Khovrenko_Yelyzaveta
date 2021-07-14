#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    do
    {
        cout << "Enter the positive number: ";
        cin >> number;
    }while (number < 0);
    for (int i = 0; i <= number; i++)
    {
        if (i != number)
            cout << i << ", ";
        else
            cout << i;
    }
    return 0;
}
