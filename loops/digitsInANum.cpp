#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = 0;
    for (; num > 0;)
    {
        num /= 10;
        digits++;
    }
    cout << "Number of digits in the entered number is: " << digits << endl;
}