#include <iostream>
using namespace std;

int main()
{
    float x = 3.14, y = 2.0;
    cout << x / y << endl;

    float a = 3.0;
    cout << a << endl;

    char p = 'a';           // single character
    cout << (int)p << endl; // used for getting ASCII values

    // converting int to char
    int num;
    cout << "Enter the ASCII value: ";
    cin >> num;
    cout << "The character corresponding to the value is: " << (char)num << endl;
}