#include <iostream>
using namespace std;

class Animal
{
public:
    // void speak()
    // {
    //     cout << "Speaking" << endl;
    // }
    virtual void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    // Method Overriding
    // void speak()
    // {
    //     cout << "Barking" << endl;
    // }
    void speak() override
    {
        cout << "Barking" << endl;
    }

    // both types of functions will work the same, with virtual-override and without them
};

int main()
{
    Dog obj;
    obj.speak(); // will call for the barking one
    // here we override the function from animal class

    return 0;
}