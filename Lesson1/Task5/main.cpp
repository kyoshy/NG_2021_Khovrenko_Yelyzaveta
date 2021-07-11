#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first number: ";
    float first = 0, second = 0;
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "1 - plus" << endl
         << "2 - minus" << endl
         << "3 - multiply" << endl
         << "4 - divide" << endl;
    int third = 0;
    do
    {
        cout << "Select the command: ";
        cin >> third;
    }while (third > 4 || third < 1);
    cout << "Result: ";
    switch (third)
    {
    case 1:
        cout << first+second;
        break;
    case 2:
        cout << first-second;
        break;
    case 3:
        cout << first*second;
        break;
    case 4:
        cout << first/second;
        break;
    }
    return 0;
}
