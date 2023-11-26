#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The table of the given number is:-" << endl;
    for (int i = n; i <= (n * 10); i += n)
    {
        cout << i << " ";
    }
}