#include <iostream>
using namespace std;

int main()
{
    // Basic triangle pattern
    int rows; // rows -> m & columns -> n
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}