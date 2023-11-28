#include <iostream>
using namespace std;

class Animal
{
public:
    int age, weight;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid obj1; // both the parent classes will be accessible
    obj1.speak();
    obj1.bark();

    return 0;
}