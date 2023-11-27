#include <iostream>
using namespace std;

class Dog
{
public:
    Dog() = default;

private:
    size_t leg_count;
    size_t arm_count;
    int *p_age;
};

int main(int argc, const char **argv)
{
    Dog dog1;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(int*): " << sizeof(int *) << endl;
    cout << "sizeof(Dog): " << sizeof(dog1) << endl;
    // the size of the object instance will be wqual to the size of the member variables and not the methods

    // string name = "My name is Akshay Kumar Pandey";
    string name = "Akshay Kumar Pandey";
    cout << "sizeof(name): " << sizeof(name) << endl;
    // same size for both of them

    return 0;
}