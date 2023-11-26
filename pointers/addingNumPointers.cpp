#include <iostream>
using namespace std;

int main()
{
    int x, y; // decalring x and y that has some garbage value rn
    cout << "Enter your two numbers: ";
    cin >> x >> y; // taking inputs

    int result; // declaring result which has some garbage value rn

    int *ptrx = &x;           // storing address of x in pointer ptrx
    int *ptry = &y;           // storing address of y in pointer ptry
    int *ptrResult = &result; // storing address of result in another pointer

    *ptrResult = *ptrx + *ptry; // accessing values of x and y using
    // dereference operators on pointers ptrx and ptry
    // Then we are adding those values and updating the value of
    // ptrResult using dereference operator

    // Then we are just printing the resulting using the deref operator
    cout << "The result is: " << *ptrResult;

    return 0;
}