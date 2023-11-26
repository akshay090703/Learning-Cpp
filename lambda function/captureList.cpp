#include <iostream>
using namespace std;

int main()
{
    // Capture Lists
    // double a = 10, b = 20;

    // auto func = [a, b]()
    // {
    //     cout << "a + b: " << a + b << endl;
    // };
    // func();

    // Capturing by value
    // int c = 42;

    // auto func = [c]()
    // {
    //     cout << "Inner value: " << c << endl;
    // };

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << "Outer value: " << c << endl;
    //     func();
    //     c++;
    // }

    // Capturing by reference
    int c = 42;

    auto func = [&c]()
    {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Outer value: " << c << endl;
        func();
        c++;
    }

    return 0;
}