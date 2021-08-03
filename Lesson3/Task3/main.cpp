#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    cout << "Enter 5 positive numbers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << ") ";
        cin >> numbers[i];
        while (numbers[i] < 0)
        {
            cout << "The number should be positive! Try again" << endl;
            cout << i+1 << ") ";
            cin >> numbers[i];
        }
    }

    int row = 0;
    int stop = 0;
    while (stop < 5)
    {
        stop = 0;
        cout << " ";
        for (int column = 0; column < 5; column++)
        {
            if (numbers[column] != 0 && numbers[column] > row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
                stop++;
            }
        }
        cout << endl;
        row++;
    }
    return 0;
}
