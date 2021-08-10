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

    // search for the largest number in the array
    int largest = 0;
    for (int big = 0; big < 5; big++)
    {
        if (largest < numbers[big])
            largest = numbers[big];
    }

    for (int row = 0; row < largest; row++)
    {
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
            }
        }
        cout << endl;
    }
    return 0;
}
