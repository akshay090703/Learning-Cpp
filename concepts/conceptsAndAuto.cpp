#include <iostream>
#include <concepts>
#include <type_traits>
using namespace std;

// This syntax constraints the auto parameter you pass in
// to comply with the integral concept
integral auto add(integral auto a, integral auto b)
{
    return a + b;
}

int main()
{
    add(10, 12);
    // add(10.1,12); // error

    integral auto x = add(10, 5);
    // floating_point auto y = add(10, 5.2); // error

    return 0;
}