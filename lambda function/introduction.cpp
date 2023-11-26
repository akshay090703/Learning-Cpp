#include <iostream>
using namespace std;

int main()
{
    // Lambda function that takes no parameters
    []()
    {
        cout << "Hello World!" << endl;
    }(); // no way to call it again as no name

    // Lambda function that takes parameters
    // Immediately calling it
    [](double a, double b)
    {
        cout << "a + b: " << a + b << endl;
    }(23.1, 3.14);

    // Lambda function that is given a name and return something
    auto result = [](double a, double b)
    {
        return a + b;
    }(23.1, 3.14);
    cout << "result: " << result << endl;

    // Lambda function that prints result directly
    cout << [](double a, double b)
    {
        return a + b;
    }(23.1, 3.14)
         << endl;

    // Lambda function which species return type explicitly
    auto result2 = [](double a, double b) -> double
    {
        return a + b;
    }(23.1, 3.14);
    cout << "result2: " << result2 << endl;

    return 0;
}