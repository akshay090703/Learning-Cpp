#include <iostream>
using namespace std;

int main()
{
    int size = 6;

    int *ptr = new (nothrow) int[size]{1, 2, 34, 5, 6};
    // int *ptr = new (nothrow) int[size];
    // All values initialized to 0 with the use of {}

    for (int i = 0; i < size; i++)
    {
        cout << "value: " << ptr[i] << " : " << *(ptr + i) << endl;
    }

    delete[] ptr;
    ptr = nullptr;

    cout << "ptr: " << ptr << endl; // NULL value

    return 0;
}