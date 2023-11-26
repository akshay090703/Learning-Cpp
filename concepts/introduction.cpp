#include <iostream>
#include <concepts>
using namespace std;

// Concept Syntax 1
// template <typename T>
//     requires integral<T>
// T add(T a, T b)
// {
//     return a + b;
// }

// // Concept Syntax 2
// template <integral T>
// T add(T a, T b)
// {
//     return a + b;
// }

// // Concept Syntax 3
// template <typename T>
// T add(T a, T b)
//     requires integral<T>
// {
//     return a + b;
// }

// // Concept Syntax 3
auto add(integral auto a, integral auto b)
{
    return a + b;
}

int main()
{
    char a1 = 10;
    char b1 = 20;

    auto result1 = add(a1, b1);
    cout << "result1: " << static_cast<int>(result1) << endl;

    int a2 = 12;
    int b2 = 40;

    auto result2 = add(a2, b2);
    cout << "result2: " << result2 << endl;

    double a3 = 12.12;
    double b3 = 3.14;

    // auto result3 = add(a3, b3);
    // cout << "result3: " << result3 << endl;

    return 0;
}