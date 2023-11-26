#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number in decimal: ";
    cin >> num;

    int result = 0, pow = 1;
    while (num > 0)
    {
        int digit = num % 2;
        num /= 2;
        result += digit * pow;
        pow *= 10;
    }
    cout << "The binary form of the number is: " << result;
}