#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int start = 0, finish = 5;
    int s = 0, f = 0;
    cout << "Enter your string:" << endl;
    cin.getline(str, 100);
    int words[2][10] = {0}; //array with indexes of begins and ends of the words in the string
    int length[10] = {0};  //array with lengths of words

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(!(str[i-1] >= 'A' && str[i-1] <= 'Z' || str[i-1] >= 'a' && str[i-1] <= 'z') &&
           (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
           {
               words[0][s] = i;
               s++;
           }
        if(!(str[i+1] >= 'A' && str[i+1] <= 'Z' || str[i+1] >= 'a' && str[i+1] <= 'z') &&
           (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
            {
                words[1][f] = i;
                f++;
            }
    }

    for(int i = 0; i<10; i++)
    {
        length[i] = words[1][i] - words[0][i];
    }

    int largest = 0;
    for (int big = 0; big < 10; big++)
    {
        if (largest < length[big])
        {
            largest = length[big];
            start = words[0][big];
            finish = words[1][big];
        }

    }

    cout << "The longest word is: ";
    for (int i = start; i <= finish; i++)
    {
        cout << str[i];
    }
    return 0;
}
