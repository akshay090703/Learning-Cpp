#include <iostream>
// #include "constants.h"
// #include "constants.h" // no error because of include guard
#include "cylinder.h"
using namespace std;

int main()
{
    Cylinder cylinder1(10, 10); // Stack Object
    cout << "Volume: " << cylinder1.volume() << endl;

    // Managing a stack object through pointers
    Cylinder *ptr_cylinder = &cylinder1;
    cout << "Volume: " << (*ptr_cylinder).volume() << endl;
    cout << "Volume: " << ptr_cylinder->volume() << endl;
    // using pointer access operator

    // Creating a cylinder heap object through pointers
    Cylinder *ptr_cylinder2 = new Cylinder(100, 1); // Heap object
    cout << "Volume: " << (*ptr_cylinder2).volume() << endl;
    cout << "Volume: " << ptr_cylinder2->volume() << endl;

    delete ptr_cylinder2;
    ptr_cylinder2 = nullptr;

    return 0;
}