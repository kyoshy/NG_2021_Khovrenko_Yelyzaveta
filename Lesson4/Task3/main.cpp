#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter your string:" << endl;
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            cout << str[i];
        }
        else
            cout << str[i];
    }

    return 0;
}
