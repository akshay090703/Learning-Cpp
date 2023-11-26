#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
};

int main()
{
    int x = 8, y = 19;

    int *ptr_x = &x, *ptr_y = &y;
    cout << ptr_x << " " << ptr_y << endl;
    auto result = maximum(ptr_x, ptr_y);
    // won't work like we want them to as it compares the addresses lexicographically

    cout << "result: " << result << endl;

    return 0;
}