#include <iostream>
using namespace std;

// Template function
template <typename T> // will be made to make actual c++ function
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 5, y = 7;
    auto result = maximum(x, y);
    cout << "result: " << result << endl;

    double a = 4.7, b = 5.6;
    auto result1 = maximum(a, b);
    cout << "result1: " << result1 << endl;

    string p = "Akshayy", q = "Pandey"; // lexographical
    auto result2 = maximum(p, q);
    cout << "result2: " << result2 << endl;

    return 0;
}