#include <iostream>
using namespace std;

int main()
{
    // Inverted triangle pattern
    int side;
    cout << "Enter the length of a side: ";
    cin >> side;

    for (int i = side; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}