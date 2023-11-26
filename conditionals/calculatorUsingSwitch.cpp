#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    char op;
    cout << "Enter the operator (+,-,*,/): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The sum of the numbers is: " << num1 + num2;
        break;
    case '-':
        cout << "The difference between the numbers is: " << num1 - num2;
        break;
    case '*':
        cout << "The product of the numbers is: " << num1 * num2;
        break;
    case '/':
        cout << "The division of the numbers is: " << num1 / num2;
        break;
    default:
        cout << "Invalid Operator";
    }
}