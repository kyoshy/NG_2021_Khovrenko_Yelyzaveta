#include <iostream>

using namespace std;

int main()
{
    int tree = 0;
    do
    {
        cout << "Tree height: ";
        cin >> tree;
    }while (tree <= 0);
    cout << endl;
    for (int row = 1; row <= tree; row++)
    {
        cout << " ";
        for (int space = 0; space < tree-row; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < row*2-1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int space = 0; space < tree; space++)
        {
            cout << " ";
        }
    cout << "*";

    return 0;
}
