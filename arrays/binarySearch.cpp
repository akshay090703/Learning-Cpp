#include <iostream>
using namespace std;

int binarySearch(int array[], int length, int element)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {3, 9, 18, 11, 7};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Element found at index: " << binarySearch(array, length, 11);

    return 0;
}