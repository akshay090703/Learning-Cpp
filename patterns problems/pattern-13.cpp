#include <iostream>
using namespace std;

int main()
{
    int side; // odd only
    cout << "Enter the length of a side: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            if (i == j || (i + j) == (side + 1))
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