#include <iostream>

using namespace std;

int main()
{
    int side = 0;
    do
    {
        cout << "Square side: ";
        cin >> side;
    }while (side <= 0);
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
