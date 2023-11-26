#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Give the 1st number: ";
    cin >> a;
    cout << "Give the 2nd number: ";
    cin >> b;
    cout << "Give the 3rd number: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
            cout << a << " is the greatest number.\n";
        else
            cout << c << " is the greatest number. \n";
    }
    else
    {
        if (b > c)
            cout << b << " is the greatest number.\n";
        else
            cout << c << " is the greatest number. \n";
    }
}