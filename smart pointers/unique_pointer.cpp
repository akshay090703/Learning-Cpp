#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    };
    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    };
};

int main()
{
    unique_ptr<MyClass> un_ptr3 = make_unique<MyClass>();

    unique_ptr<int> un_ptr1 = make_unique<int>(69);
    // made a unique int pointer that points to an int value 69

    // cout << *un_ptr1 << endl; // will become null after the moving of ownership hence exception

    // unique_ptr<int> un_ptr2 = un_ptr1; // error
    // we cannot share unique pointers

    unique_ptr<int> un_ptr2 = move(un_ptr1); // moving the ownership of the address on un_ptr1

    cout << *un_ptr2 << endl;

    return 0;
}