#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    ptr = new int; // dynamic memory allocated

    *ptr = 14; // Writing into dynamic memory

    cout << "Dynamic memory: " << ptr << endl;
    cout << "Dynamic memory value: " << *ptr << endl;

    // returning memory to the OS
    delete ptr;
    cout << "Dynamic memory after delete: " << ptr << endl;
    cout << "Dynamic memory value after delete: " << *ptr << endl;

    // we should not mess with the memory that we don't have
    ptr = nullptr; // should set it back to null pointer

    return 0;
}