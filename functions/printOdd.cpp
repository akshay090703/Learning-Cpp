#include <iostream>
using namespace std;

// Function Prototype
bool isOdd(int num);

int main()
{
    int a, b;
    cout << "Enter the smaller number: ";
    cin >> a;
    cout << "Enter the larger number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (isOdd(i))
        {
            cout << i << " ";
        }
    }
}

bool isOdd(int x)
{
    if (x % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}