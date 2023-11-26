#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 14.14;
    // extracting the address of x
    // cout << &x << " " << &y;

    // Creating a pointer to store address of int x
    // Creating a pointer that can store integer type address
    int *ptr; // declaring pointer
    ptr = &x; // initializing pointer or re assigning
    cout << ptr << endl;

    // Creating a pointer to store float address
    float *ptr_f = &y;
    cout << ptr_f;

    return 0;
}