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
    for (int row = 1; row <= side; row++)
    {
        for (int column = 0; column < row ; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = side; row >= 1; row--)
    {
        for (int column = 0; column < row; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 0; row < side; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << "  ";
        }
        for (int star = side; star > row; star--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 1; row <= side; row++)
    {
        for (int space = 0; space < side - row; space++)
        {
            cout << "  ";
        }
        for (int star = 0; star < row; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
