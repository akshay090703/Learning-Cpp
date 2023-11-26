#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    // Using the dereference operator to get the value stored in the
    // address in the pointer 'ptr'
    cout << "Address stored inside ptr: " << ptr << endl;
    cout << "Value stored inside the address stored in ptr: " << *ptr << endl;

    x = 14;
    cout << "Address stored inside ptr: " << ptr << endl;
    cout << "Value stored inside the address stored in ptr: " << *ptr << endl;

    // we can even update the value of the variable using dereference operator
    *ptr = 100;
    // we can also store this value in another variable
    int y = *ptr;
    cout << "Address stored inside ptr: " << ptr << endl;
    cout << "Value stored inside the address after updating: " << *ptr;

    return 0;
}