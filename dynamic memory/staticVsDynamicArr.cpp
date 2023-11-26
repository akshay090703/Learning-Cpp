#include <iostream>
using namespace std;

int main()
{
    // Static Array
    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << "arr size: " << sizeof(arr) / sizeof(arr[0]) << endl;
    for (auto num : arr)
    {
        cout << "value: " << num << endl;
    }

    cout << "======================" << endl;

    // Dynamic Array
    int *ptr = new int[6]{1, 2, 3, 4, 5, 6};
    // range based loops wont work for dynamic array
    for (auto num : ptr)
    {
        cout << "value: " << num << endl;
    }

    cout << "dynamic arr size: " << sizeof(ptr) / sizeof(ptr[0]) << endl;
    return 0;
}