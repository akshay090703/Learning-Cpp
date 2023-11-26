#include <iostream>
using namespace std;

int main()
{
    // Star pyramid pattern
    int side;
    cout << "Enter the no. of layers in the pyramid: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= (1 + (2 * (i - 1))); k++)
        {
            // cout << "* ";
            cout << (char)(k + 64) << " ";
        }
        cout << endl;
    }
}