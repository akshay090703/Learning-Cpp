#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the length of a side: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        // 2nd way:
        for (int j = 1; j <= (side - i); j++) // spaces loop
        {
            // 1st way:
            // if (j <= (side - i))
            // {
            //     cout << "  ";
            // }
            // else
            // {
            //     cout << "* ";
            // }
            cout << "  ";
        }

        for (int k = 1; k <= i; k++) // stars loop
        {
            // cout << "* ";
            cout << (char)(k + 64) << " ";
        }
        cout << endl;
    }
}