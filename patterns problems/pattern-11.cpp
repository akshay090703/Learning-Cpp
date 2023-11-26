#include <iostream>
using namespace std;

int main()
{
    // Plus design '+'
    int side; // side is always odd
    cout << "Enter the length of a side: ";
    cin >> side;

    int centre = (side / 2) + 1;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            if (i == centre || j == centre)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}