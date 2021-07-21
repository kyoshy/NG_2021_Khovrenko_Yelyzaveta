#include <iostream>

using namespace std;

int main()
{
    cout << "Enter school numbers" << endl;
    int school[10];
    for (int i = 0; i < 10; i++)
    {
        cout << i+1 << ") ";
        cin >> school[i];
    }
    int your_school = 0;
    cout << "Enter your school's number: ";
    cin >> your_school;
    int know = 0;
    for (int i = 0; i < 10; i++)
    {
        if (school[i] == your_school)
            know++;
    }
    if (know > 0)
        cout << "I know this school!";
    else
        cout << "I don't know this school...";
    return 0;
}
