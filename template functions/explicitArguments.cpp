#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
};

int main()
{
    int a = 10, b = 18;
    double x = 12.11, y = 14.12;
    string p = "Akshay", q = "Kumar";

    // will fail by default
    auto max = maximum<int>(a, x); // explicit template arguments
    // the data will be implicitly converted to desired data type

    // auto max1 = maximum<double>(a, q);
    // will give us error as string can't be converted to double
    cout << "max= " << max << endl;

    return 0;
}