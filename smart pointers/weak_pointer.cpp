#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "MyClass constructor" << endl;
    }
    ~MyClass()
    {
        cout << "MyClass destructor" << endl;
    }
};

int main()
{
    weak_ptr<int> w_ptr1; // created a weak pointer

    {
        shared_ptr<int> sh_ptr1 = make_shared<int>(25);
        w_ptr1 = sh_ptr1; // assigned shared pointer to weak pointer

        // w_ptr1 is not a owner to the memory location but is only there to observe and point to it
        // the count will still be 1

        cout << "Total owners: " << sh_ptr1.use_count() << endl; // 1

        // plus a weak pointer won't keep an object alive whereas a shared pointer will
        // This object will die after the scope
    }

    return 0;
}