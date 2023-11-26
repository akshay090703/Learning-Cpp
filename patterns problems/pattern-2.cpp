#include <iostream>
using namespace std;

int main()
{
    // Alphabet square
    int side;
    cout << "Enter the length of a side: ";
    cin >> side;

    for (int i = 0; i < side; i++)
    {
        for (int j = 65; j < 65 + side; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}