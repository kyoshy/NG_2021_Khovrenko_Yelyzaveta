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
        if (enter >= 1)
        {
            if (numbers[enter-1]%2 == 0 && numbers[enter]%2 != 0)
            {
                do
                {
                    cout << "Numbers should be even! Try again" << endl;
                    cin >> numbers[enter];
                }while (numbers[enter]%2 != 0);
            }
            if (numbers[enter-1]%2 != 0 && numbers[enter]%2 == 0)
            {
                do
                {
                    cout << "Numbers should be odd! Try again" << endl;
                    cin >> numbers[enter];
                }while (numbers[enter]%2 == 0);
            }
        }
    }
    cout << endl;

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

    for (int out = 0; out < 20; out++)
    {
        if (numbers[out] == 0)
            break;
        cout << " ";
        for (int space = 0; space < (largest/2) - (numbers[out]/2); space++)
        {
            cout << " ";
        }
        while(numbers[out] > 0)
        {
            cout << "*";
            numbers[out]--;
        }
        cout << endl;
    }
    return 0;
}
