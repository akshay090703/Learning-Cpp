#include <iostream>
using namespace std;

int main()
{

    // capturing everything by value
    // int c = 42;

    // auto func = [=]()
    // {
    //     cout << "Inner value: " << c << endl;
    // };

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << "Outer value: " << c << endl;
    //     func();
    //     c++;
    // }

    // capturing everything by reference
    int c = 42;
    int d = 10;

    auto func = [&]()
    {
        cout << "Inner value(c): " << c << endl;
        cout << "Inner value(d): " << d << endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Outer value(c): " << c << endl;
        cout << "Outer value(d): " << d << endl;
        func();
        d++;
        c++;
    }

    return 0;
}