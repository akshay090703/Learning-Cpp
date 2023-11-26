#include <iostream>
using namespace std;

int main()
{
    float p, r, t;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "\nEnter the rate of interest in decimal form: ";
    cin >> r;
    cout << "\nEnter the time: ";
    cin >> t;

    cout << "\nThe simple interest is: " << (p * r * t) / 100 << endl;
}