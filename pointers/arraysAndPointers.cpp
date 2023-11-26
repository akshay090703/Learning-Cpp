#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {12, 34, 56};
    int *ptr = &arr[0];

    cout << ptr << " " << arr << endl;
    cout << *ptr << " " << *arr << endl;

    cout << *(arr + 0) << " " << *(arr + 1) << " " << *(arr + 2) << " " << *(arr + 3) << endl;
    // at 3 there will be a garbage value in the memory because
    // we only have 3 elements in the array

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}