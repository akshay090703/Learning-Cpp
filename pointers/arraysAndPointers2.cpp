#include <iostream>
using namespace std;

void process(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    *(arr + 2) = 24;
}

int main()
{
    int arr[3] = {4, 7, 9};
    process(arr, 3);

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}