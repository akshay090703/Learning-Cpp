#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    cout << "Note: We won't consider the number factor of itself.\n";
    for (int i = (num / 2) + 1; i >= 1; i--)
    {
        if (num % i == 0)
        {
            cout << i << " is the highest factor of " << num << ".";
            break;
        }
    }
}