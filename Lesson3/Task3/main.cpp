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

     // search for the largest number in the array
    int largest = 0;
    for (int big = 0; big < 20; big++)
    {
        int high = largest;
        if (numbers[big] == 0)
            break;
        if (numbers[big+1] < numbers[big])
            high = numbers[big];
        if (high > largest)
            largest = high;
    }

    int arr[5] = {0, 0, 0, 0, 0};

    for (int stop = 0; stop < largest; stop++)
    {
        cout << " ";
        for (int column = 0; column < 5; column++)
        {
            if (numbers[column] != 0 && numbers[column] > arr[column])
            {
                cout << "*";
                arr[column]++;
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
