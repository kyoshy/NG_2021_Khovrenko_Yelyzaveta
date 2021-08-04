#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter your string:" << endl;
    cin.getline(str, 100);
    int words = 0;
    int i = 0;
    char letters[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g',
                     'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n',
                     'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u',
                     'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'};
    int same[100];

    for (int filling = 0; filling < 100; filling++)
        same[filling] = 0;

    while (str[i] != 0)
    {
        for (int compare = 0; compare < 52; compare++)
        {
            if (str[i] == letters[compare])
               same[i]++;
        }
        if (same[i] == 0 && same[i-1] == 1 || str[i+1] == 0)
            words++;
        i++;
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
