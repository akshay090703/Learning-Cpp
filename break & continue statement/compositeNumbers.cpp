#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    for (int i = 2; i < (n / 2); i++)
    {
        if (n == 1)
        {
            cout << "Neither prime nor component number.";
            break;
        }
        if (n % i == 0)
        {
            cout << n << " is a composite number.";
            break;
        }
        if (i == (n / 2) - 1)
        {
            cout << n << " is a prime number.";
        }
    }
}