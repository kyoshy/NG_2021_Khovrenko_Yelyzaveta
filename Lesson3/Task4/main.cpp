#include <iostream>

using namespace std;

int main()
{
    int numbers[20];
    cout << "Enter numbers (only even or only odd)" << endl;
    for (int enter = 0; enter < 20; enter++)
    {
        cin >> numbers[enter];
        if (numbers[enter] == 0)
            break;
        if (enter >= 1) //check for even or odd numbers
        {
            while (numbers[enter-1]%2 == 0 && numbers[enter]%2 != 0)
            {
                cout << "Numbers should be even! Try again" << endl;
                cin >> numbers[enter];
            }
            while (numbers[enter-1]%2 != 0 && numbers[enter]%2 == 0)
            {
                cout << "Numbers should be odd! Try again" << endl;
                cin >> numbers[enter];
                if (numbers[enter] == 0)
                    break;
            }
        }
    }
    cout << endl;

    // search for the largest number in the array
    int largest = 0;
    for (int big = 0; big < 20; big++)
    {
        if (numbers[big] == 0)
            break;
        if (largest < numbers[big])
            largest = numbers[big];
    }

    for (int out = 0; out < 20; out++)
    {
        if (numbers[out] == 0)
            break;
        for (int space = 0; space <= (largest/2) - (numbers[out]/2); space++)
        {
            cout << " ";
        }
        for (int star = 0; star < numbers[out]; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
