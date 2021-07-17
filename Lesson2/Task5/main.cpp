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
        for (int space = 0; space < tree - row; space++)
        {
            cout << " ";
        }
        for (int left = 0; left < row; left++)
        {
            cout << "*";
        }
        if (row > 1)
            {

                for (int right = 0; right < row - 1 ; right++)
                {
                    cout << "*";
                }
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
