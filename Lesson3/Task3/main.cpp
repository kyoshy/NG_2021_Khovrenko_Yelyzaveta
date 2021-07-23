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
        if (numbers[i] < 0)
        {
            do
            {
                cout << "The number should be positive! Try again" << endl;
                cout << i+1 << ") ";
                cin >> numbers[i];
            }while (numbers[i] < 0);
        }
    }
    int stop = 0;
    while (stop < 5)
    {
        cout << " ";
        for (int column = 0; column < 5; column++)
        {
            if (numbers[column] > 0)
            {
                cout << "*";
                numbers[column]--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        stop = 0;
        for (int i = 0; i < 5; i++)
        {
            if (numbers[i] == 0)
                stop++;
        }
    }
    return 0;
}
