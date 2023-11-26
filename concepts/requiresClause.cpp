#include <iostream>
#include <type_traits>
#include <concepts>
using namespace std;

template <typename T>
concept TinyType = requires(T a) {
    sizeof(a) <= 4;           // Simple Requirement
    requires(sizeof(a) <= 4); // Nested Requirement
};

// Compound Requirement
template <typename T>
concept Addable = requires(T a, T b) {
    // noexcept is optional
    {
        a + b
    } -> convertible_to<int>; // Compound Requirement
    // First checks if a + b is valid syntax and then if the result is convertible to int
};

template <typename T>
T add(T a, T b)
    requires Addable<T>
{
    return a + b;
};

template <typename T>
T Double(T a)
    requires TinyType<T>
{
    return 2 * a;
};

int main()
{

    int a = 13, b = 23;
    string p = "Akshay", q = " Web Developer";
    double x = 23.12;

    cout << "2*a: " << Double(a) << endl; // size = 4
    // cout << "2*b: " << Double(b) << endl; // size = 8

    // cout << "p+q: " << add(p, q) << endl;
    cout << "a+b: " << add(a, b) << endl;
    // cout << "a+x: " << add(a, x) << endl;

    return 0;
}