#include <iostream>
using namespace std;

int main()
{
    int x = 14;
    double dec = 3.14;
    int *ptr = &x;
    double *ptrd = &dec;

    cout << "Size od x: " << sizeof(x) << endl;
    cout << "Size od dec: " << sizeof(dec) << endl;

    cout << ptr << " " << (ptr + 1) << " " << (ptr - 1) << endl;
    cout << ptrd << " " << (ptrd + 2) << " " << (ptrd + 4 - 4) << endl;

    return 0;
}