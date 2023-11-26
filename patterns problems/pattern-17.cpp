#include <iostream>
using namespace std;

int main()
{
    // bi sided pyramid
    int sides; // here total number of layers will be odd
    cout << "Enter the number of sides: ";
    cin >> sides;

    // Upper part
    for (int i = 1; i <= sides; i++)
    {
        for (int j = 1; j <= sides - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Bottom part
    for (int i = 1; i <= (sides - 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= ((2 * sides - 3) + (-2) * (i - 1)); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}