#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binNum;
    cout << "Enter your binary number: ";
    cin >> binNum;

    int result = 0;
    for (int i = 0; binNum > 0; i++)
    {
        int digit = binNum % 10;
        binNum /= 10;
        result += pow(2, i) * digit;
    }
    cout << "The decimal number is: " << result << ".";
}