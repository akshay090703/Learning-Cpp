#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Give an integer: ";
    cin >> num;

    if (num < 0)
        cout << -num << endl;
    else
        cout << num << endl;
}