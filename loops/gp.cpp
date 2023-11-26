#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "GP: 3, 12, 48...\n";
    cout << "Enter the number of terms to be printed: ";
    cin >> num;

    int n = 3;
    cout << "GP terms are: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << n << " ";
        n *= 4;
    }
}