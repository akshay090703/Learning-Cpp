#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 20;
    int y = 30;

    int *ptrx = &x;
    int *ptry = &y;

    swap(ptrx, ptry);

    cout << x << " " << y;

    return 0;
}