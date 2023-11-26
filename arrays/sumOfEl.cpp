#include <iostream>
using namespace std;

int sumOfElArr(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "The sum of the array is: " << sumOfElArr(array, length);

    return 0;
}