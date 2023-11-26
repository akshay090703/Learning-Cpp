#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {23, 45, 32, 12};
    int(*ptr)[4] = &arr;

    cout << ptr << " " << arr << " " << endl;
    cout << *ptr << " " << *arr << " " << endl;
    cout << *(*ptr + 2) << " " << *arr << " " << endl;
    cout << *((*ptr) + 2) << " " << *arr << " " << endl;

    return 0;
}