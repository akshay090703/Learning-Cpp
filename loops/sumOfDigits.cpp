#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0, digit;
    for (; num > 0;)
    {
        digit = num % 10;
        num /= 10;
        sum += digit;
    }
    cout << "The sum of the digits is: " << sum;
}