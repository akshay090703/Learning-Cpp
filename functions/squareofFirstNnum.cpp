#include <iostream>
using namespace std;

void sqOfNaturalNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
}

int main()
{
    int iterations;
    cout << "Numbers to be printed: ";
    cin >> iterations;

    sqOfNaturalNum(iterations);
}