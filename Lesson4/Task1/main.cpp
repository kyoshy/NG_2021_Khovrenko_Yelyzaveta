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
        if(!(str[i+1] >= 'A' && str[i+1] <= 'Z' || str[i+1] >= 'a' && str[i+1] <= 'z') &&
           (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
            words++;
    }

    cout << "Words in the string: " << words;
    return 0;
}
