#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x > 1)
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    cout << "Give the smaller number: ";
    cin >> a;
    cout << "Give the larger number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}