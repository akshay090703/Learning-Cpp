#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the length of a side: ";
    cin >> side;

    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}