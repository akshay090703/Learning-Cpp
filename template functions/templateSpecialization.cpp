#include <iostream>
#include <cstring>
using namespace std;

// Function template
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// Template Specialization
// special behaviour when T = const char*
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int a = 12, b = 14;
    double p = 23.45, q = 34.54;
    string x = "Akshay", y = "Kumar";

    cout << "Maximum int: " << maximum(a, b) << endl;
    cout << "Maximum double: " << maximum(p, q) << endl;
    cout << "Maximum string: " << maximum(x, y) << endl;

    const char *r = "Akshay";
    const char *s = "Kumar";

    cout << "Max(const char*): " << maximum(r, s) << endl;

    return 0;
}