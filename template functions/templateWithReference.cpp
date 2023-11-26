
#include <iostream>
using namespace std;

// Declaration or header of the function template
template <typename T>
const T &maximum(const T &a, const T &b);

int main()
{
    double a = 23.12, b = 54.12;

    // Print the address of variable 'a'
    cout << "Out - &a: " << &a << endl;

    // Call the function template 'maximum' with arguments 'a' and 'b'
    // The function returns a reference to the maximum value between 'a' and 'b'
    auto result = maximum(a, b);

    // Print the address of variable 'a'
    cout << "Out - &a: " << &a << endl;

    return 0;
}

// Definition of the function template 'maximum'
template <typename T>
const T &maximum(const T &a, const T &b)
{
    // Print the address of variable 'a'
    cout << "In - &a: " << &a << endl;

    // Return a reference to the maximum value between 'a' and 'b'
    return (a > b) ? a : b;
};
//
// In this code, we have a function template called `maximum` that takes two arguments of the same type and returns a reference to the maximum value between them. The function template is declared in the header and defined later in the code.
//
// In the `main` function, we declare two variables `a` and `b` of type `double` and assign some values to them. Then