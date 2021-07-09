#include <iostream>

using namespace std;

int main()
{
    cout << "Squirrel needs this amount of nuts: ";
    int N = 0;
    cin >> N;
    cout << "Nuts in one cone: ";
    int K = 0;
    cin >> K;
    cout << "Squirrel collected this amount of cones: ";
    int M = 0;
    cin >> M;
    cout << "\nDoes squirrel have enough nuts...?" << endl;
    if (M*K>=N)
    {
        cout << "Yes, it's OK";
    }
    else
    {
        cout << "NOPE";
    }
    return 0;
}
