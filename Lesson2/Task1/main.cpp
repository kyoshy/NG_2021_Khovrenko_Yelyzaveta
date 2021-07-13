#include <iostream>

using namespace std;

int main()
{
    cout << "How many stars do you want to see?" << endl;
    int stars = 0;
    cin >> stars;
    for (int i = 0; i < stars; i++)
    {
        cout << "*";
    }
    return 0;
}
