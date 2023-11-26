#include <iostream>
using namespace std;

int main()
{
    int *ptr1 = new int(23); // using direct initialization
    int *ptr2 = new int{31}; // using uniform initialization

    cout << "ptr1: " << ptr1 << endl;
    cout << "*ptr1: " << *ptr1 << endl;

    cout << "ptr2: " << ptr2 << endl;
    cout << "*ptr2: " << *ptr2 << endl;

    delete ptr1;
    ptr1 = nullptr; // these pointers can be reused later

    delete ptr2;
    ptr2 = nullptr;

    ptr1 = new int(35);
    cout << *ptr1;

    delete ptr1;
    delete ptr1; // will be crashed by the OS

    cout << "Program ends well" << endl;

    return 0;
}