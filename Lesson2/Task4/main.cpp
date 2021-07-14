#include <iostream>

using namespace std;

int main()
{
    int side = 0;
    do
    {
        cout << "Enter the size of triangle side: ";
        cin >> side;
    }while (side <= 0);
    cout << endl;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = side; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = side; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 0; j < side - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
