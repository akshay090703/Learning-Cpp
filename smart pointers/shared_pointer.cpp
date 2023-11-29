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
    {
        shared_ptr<MyClass> sh_ptr1 = make_shared<MyClass>();
        cout << "Number of shared owners: " << sh_ptr1.use_count() << endl; // count = 1

        {
            shared_ptr<MyClass> sh_ptr2 = sh_ptr1; // now both sh_ptr1 and sh_ptr2 own the object at the memory location

            cout << "Number of shared owners after sharing: " << sh_ptr1.use_count() << endl; // count = 2
        }
        cout << "Number of shared owners after sharing: " << sh_ptr1.use_count() << endl; // count = 1 as sh_ptr2 is dead now
    }

    return 0;
}