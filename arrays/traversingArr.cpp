#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int length = sizeof(array) / sizeof(array[0]);

    // for (int i = 0; i < length; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // forEach loop: will go through each element no matter what
    for (int element : array)
    {
        cout << element << " ";
    }

    return 0;
}