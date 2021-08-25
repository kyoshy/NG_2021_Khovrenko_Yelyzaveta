#include <iostream>

using namespace std;

int EnterHeight()
{
    int tree = 0;
    do
    {
        cout << "Tree height: ";
        cin >> tree;
    }while (tree <= 0);
    cout << endl;
    return tree;
}

void DrawSpace(int tree, int row)
{
    for (int space = 0; space < tree-row+1; space++)
        {
            cout << " ";
        }
}

void DrawStars(int row)
{
    for (int star = 0; star < row*2-1; star++)
        {
            cout << "*";
        }
}

void DrawTriangle(int tree)
{
   for (int row = 1; row <= tree; row++)
    {
        DrawSpace(tree, row);
        DrawStars(row);
        cout << endl;
    }
}

void DrawTree(int tree)
{
    DrawTriangle(tree);
    DrawSpace(tree,1);
    DrawStars(1);

}

int main()
{
    DrawTree(EnterHeight());

    return 0;
}
