#include <iostream>

using namespace std;

int main()
{
    char str[256];
    cout << "Enter your string:" << endl;
    cin.getline(str, 256);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            cout << (char)(str[i]-32);
        }
        else
            cout << str[i];
    }

    return 0;
}
