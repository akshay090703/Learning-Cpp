#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the length of a side: ";
    cin >> side;

    int num = 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}