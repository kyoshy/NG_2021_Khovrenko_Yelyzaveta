#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter your string:" << endl;
    cin.getline(str, 100);
    int words = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z') &&
           (str[i+1] >= 'A' && str[i+1] <= 'Z' || str[i+1] >= 'a' && str[i+1] <= 'z') || str[i+1] == '\0')
            words++;
    }

    switch (words)
    {
    case 0:
        cout << "There are no words in the string.";
        break;
    case 1:
        cout << "There is 1 word in the string.";
        break;
    default:
        cout << "There are " << words << " words in the string.";
    }
    return 0;
}
