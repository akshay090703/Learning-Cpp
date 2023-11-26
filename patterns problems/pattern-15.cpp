#include <iostream>
using namespace std;

int main()
{
    // Rhombus Pattern
    int side;
    cout << "Enter the side of the rhombus: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= side; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}