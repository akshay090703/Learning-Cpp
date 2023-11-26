#include <iostream>
#include <concepts>
#include <type_traits>
using namespace std;

template <typename T>
concept TinyType = requires(T a) {
    sizeof(a) <= 4;
    requires sizeof(a) <= 4;
};

// template <typename T>
// T add(T a, T b)
//     requires integral<T> || floating_point<T> || TinyType<T>
// {
//     return a + b;
// };

template <typename T>
T add(T a, T b)
    requires integral<T> || TinyType<T>
{
    return a + b;
};

int main()
{
    int x = 6, y = 12;
    float a = 2.2, b = 4.5;

    cout << "x+y: " << add(x, y) << endl;
    cout << "a+b: " << add(a, b) << endl;

    return 0;
}