#include <iostream>
#include <type_traits>
#include <concepts>
using namespace std;

// Custom concept (can be made in any of the 4 ways)
template <typename T>
concept MyIntegral = is_integral_v<T>;

template <typename T>
concept Multiplicable = requires(T a, T b) {
    a *b; // only checks if the operation is possible
};

template <typename T>
T add(T a, T b)
    requires Multiplicable<T>
{
    return a + b;
}

template <typename T>
concept Incremental = requires(T a, T b) {
    a++;
    b++;
    a += 1;
    b += 1;
};

template <typename T>
T add2(T a, T b)
    requires Incremental<T>
{
    return (a) + (b);
}

int main()
{
    int a = 23, b = 45;
    cout << "Sum of two numbers: " << add(a, b);

    double x = 23.3, y = 25.4;
    cout << "Sum of two numbers: " << add(x, y);

    int p = 23, q = 25;
    cout << "Sum of two numbers: " << add2(p, q);

    return 0;
}