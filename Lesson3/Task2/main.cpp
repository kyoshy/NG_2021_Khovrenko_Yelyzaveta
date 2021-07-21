#include <iostream>

using namespace std;

int main()
{
    int cards[10];
    char command = 0;
    int card = 0;
    float money = 0;
    for (int i = 0; i < 10; i++)
    {
        cards[i] = 0;
    }
    do
    {
        cout << "YOUR CARDS" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << cards[i] << "  ";
        }
        cout << endl;
        do
        {
            cout << "Select card: ";
            cin >> card;
        }while (card > 10 || card < 1);
        do
        {
            cout << "How much money: ";
            cin >> money;
        }while (money < 0);
        cards[card-1] = money;
        cout << "Enter 0 to continue or 1 to exit: ";
        cin >> command;
        cout << endl;
    }while (command != 1);
    return 0;
}
