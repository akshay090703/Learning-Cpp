#include <iostream>
using namespace std;

int maxElArr(int array[], int length)
{
    int maxEl = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > maxEl)
        {
            maxEl = array[i];
        }
    }
    return maxEl;
}

int main()
{
    int array[] = {3, 5, 7, 2, 6, 11, 34, 5, 12, 12};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "The largest element is: " << maxElArr(array, length);
    return 0;
}