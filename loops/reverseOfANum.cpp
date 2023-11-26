#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reverse = 0, lastDigit;
    while (num > 0)
    {
        reverse *= 10;
        lastDigit = num % 10;
        num /= 10;
        reverse += lastDigit;
    }
    cout << "The reverse of the given number is: " << reverse;
}